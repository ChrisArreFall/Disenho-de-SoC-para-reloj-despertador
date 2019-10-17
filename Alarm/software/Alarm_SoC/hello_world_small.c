
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include "sys/alt_irq.h"
#include <priv/alt_legacy_irq.h>

#define ZERO 0x40
#define ONE 0xF9
#define TWO 0x24
#define THREE 0x30
#define FOUR 0x19
#define FIVE 0x12
#define SIX 0x02
#define SEVEN 0x78
#define EIGHT 0x00
#define NINE 0x18
#define F 0x0E
#define N 0x48
#define OFF 0xFF

// Types definitions
struct timeStruct {
	int hourTens;
	int hourUnits;
	int minTens;
	int minUnits;
	int secUnits;
	int secTens;
	int seconds;
};

typedef unsigned char uchar;
typedef struct timeStruct time;

// HW pointers
volatile int *seconds 	= (int *) SECONDS_BASE; // displays address
volatile int *minutes 	= (int *) MINUTES_BASE; // displays address
volatile int *hours		= (int *) HOURS_BASE; // displays address
volatile int *switches 	= (int *) SWITCHES_BASE; // switches address
volatile int *buttons 	= (int *) BUTTONS_BASE; // buttons address
volatile int *gpioOut 	= (int *) GPIO_BASE; // gpio out address
volatile int *leds 		= (int *) LEDS_BASE; // leds address
volatile uchar *timerCoreStatus = (uchar *) (TIMERCORE_BASE); // timer core status address
volatile int *uart 		= (int *) UART_BASE;

// Clock variables
time actualTime;
time alarmTime;

// Control variables
bool switchingAlarm = false;
bool settingAlarm = false;
bool alarmStatus = false;

// Alarm visualization
int ledsValue = 0x1;
int ledsOn    = 0b1111111111;
int counter = 0;

/**
 * Converts a integer value to 7 segment display format
 */
int ToHexa(int value) {
	switch (value) {
	case 0:
		return ZERO;
	case 1:
		return ONE;
	case 2:
		return TWO;
	case 3:
		return THREE;
	case 4:
		return FOUR;
	case 5:
		return FIVE;
	case 6:
		return SIX;
	case 7:
		return SEVEN;
	case 8:
		return EIGHT;
	case 9:
		return NINE;
	case 10:
		return F;
	case 11:
		return N;
	case 12:
		return OFF;
	default:
		return ZERO;
	}
}

/**
 * Takes 2 values and encoded them to be set it in the 7 segments displays
 */
int EncodeHexa(int hex1, int hex0) {
	return (ToHexa(hex1) << 8) | (ToHexa(hex0));
}

/**
 * Update the hour
 */
void UpdateTime(void) {
	if (actualTime.secUnits >= 9) {
		actualTime.secTens++;
		actualTime.secUnits = 0x0;
	}
	else{
		actualTime.secUnits++;
	}

	if (actualTime.secTens >= 6) {
		actualTime.secUnits++;
		actualTime.secTens = 0x0;
	}

	if (actualTime.seconds >= 60) { //45
		actualTime.minUnits++;
		actualTime.seconds = 0x0;
	}

	if (actualTime.minUnits >= 10) {
		actualTime.minTens++;
		actualTime.minUnits = 0x0;

	}

	if (actualTime.minTens >= 6) {
		actualTime.hourUnits++;
		actualTime.minTens = 0x0;

	}

	if (actualTime.hourUnits >= 10) {
		actualTime.hourTens++;
		actualTime.hourUnits = 0x0;

	}

	if (actualTime.hourTens >= 2 && actualTime.hourUnits >= 4) {
		actualTime.hourTens = 0x0;
		actualTime.hourUnits = 0x0;

	}

}

/*
 * Refresh the time on the displays
 */
void UpdateTimeDisplays(void) {
	if (settingAlarm) {
		//*seconds	= EncodeHexa(alarmTime.hourTens, alarmTime.hourUnits, alarmTime.minTens, alarmTime.minUnits);
		*minutes	= EncodeHexa(alarmTime.minTens, alarmTime.minUnits);
		*hours		= EncodeHexa(alarmTime.hourTens, alarmTime.hourUnits);
	} else if (switchingAlarm) {
		if (alarmStatus) {
			// Put ON on the displays
			*minutes = EncodeHexa(12, 12);
			*hours = EncodeHexa(12, 12);

		} else {
			// Put OFF on the displays
			*minutes = EncodeHexa(12, 0);
			*hours = EncodeHexa(12, 12);

		}

	} else {
		*seconds	= EncodeHexa(actualTime.secTens, actualTime.secUnits);
		*minutes	= EncodeHexa(actualTime.minTens, actualTime.minUnits);
		*hours		= EncodeHexa(actualTime.hourTens, actualTime.hourUnits);

	}
}

/**
 * Handler for the Timer Core interruptions
 */
static void HandlerTimerCoreInterrupt(void* context) {
	*timerCoreStatus = 0; // Resets the status
	actualTime.seconds++;
	UpdateTime();

}

/**
 * Setup the Timer Core
 */
static void SetupTimerCore(void) {
	// Getting the address
	uchar *timerCoreControl = (uchar *) (TIMERCORE_BASE + 0x4);
	uchar *timerCoreMask = (uchar *) (TIMERCORE_BASE + 0x8);
	uchar *timerCoreEdgeCap = (uchar *) (TIMERCORE_BASE + 0xC);

	// Sets the interrupt handler
	//alt_irq_register(TIMERCORE_IRQ,NULL, HandlerTimerCoreInterrupt);
	alt_ic_isr_register(TIMERCORE_IRQ_INTERRUPT_CONTROLLER_ID, TIMERCORE_IRQ, HandlerTimerCoreInterrupt, NULL, 0x0);
	// Starts the timer
	*timerCoreMask = 0x0;
	*timerCoreEdgeCap = 0x4;
	*timerCoreControl = 0x0007;
	*timerCoreStatus = 0;

}

/**
 * Animates the alarm notification
 */
void LedsUpdate(void) {
	if (*leds) {
		*leds = 0b0000000000;

	} else {
		*leds = ledsOn;
	}

}

/**
 * Main function of the clock
 */
int main() {
	*gpioOut = 0x00;
	SetupTimerCore();
	*leds = 0x0;

	while (1) {
		if (*switches == 0x1) {
			*leds = 0x1;
			if (*buttons == 0x7) {
				actualTime.hourUnits++;
				*leds = 0x10000;

			} else if (*buttons == 0xB) {
				actualTime.minUnits++;
				*leds = 0x01000;
			}

			if (actualTime.minUnits >= 10) {
				actualTime.minTens++;
				actualTime.minUnits = 0x0;
			}

			if (actualTime.minTens >= 6) {
				actualTime.minTens = 0x0;
			}

			if (actualTime.hourUnits >= 10) {
				actualTime.hourTens++;
				actualTime.hourUnits = 0x0;
			}

			if (actualTime.hourTens >= 2 && actualTime.hourUnits >= 4) {
				actualTime.hourTens = 0x0;
				actualTime.hourUnits = 0x0;
			}
			usleep(150000); // To avoid multiples increments

		} else if (*switches == 0x2) {
			*leds = 0x2;
			*seconds	= EncodeHexa(0x10000000, 0x10000000);
			settingAlarm = true;
			if (*buttons == 0x7) {
				alarmTime.hourUnits++;

			} else if (*buttons == 0xB) {
				alarmTime.minUnits++;

			}

			if (alarmTime.minUnits >= 10) {
				alarmTime.minTens++;
				alarmTime.minUnits = 0x0;

			}

			if (alarmTime.minTens >= 6) {
				alarmTime.minTens = 0x0;

			}

			if (alarmTime.hourUnits >= 10) {
				alarmTime.hourTens++;
				alarmTime.hourUnits = 0x0;

			}

			if (alarmTime.hourTens >= 2 && alarmTime.hourUnits >= 4) {
				alarmTime.hourTens = 0x0;
				alarmTime.hourUnits = 0x0;

			}
			usleep(150000); // To avoid multiples increments

		} else if (*switches == 0x3) {
			*leds = 0x3;
			switchingAlarm = true;
			*seconds	= EncodeHexa(0x10000000, 0x10000000);
			if (*buttons == 14) {
				if (alarmStatus) {
					printf("Off");
					alarmStatus = false;
				} else {
					alarmStatus = true;
					printf("On");
				}
			}
			usleep(150000); // To avoid multiples changes

		} else {

			if (alarmStatus) {
				if (alarmTime.hourTens == actualTime.hourTens
						&& alarmTime.hourUnits == actualTime.hourUnits
						&& alarmTime.minTens == actualTime.minTens
						&& alarmTime.minUnits == actualTime.minUnits) {
					printf("Beep ");
					// Make the sound
					*gpioOut = 0x01;
					LedsUpdate();
					usleep(150000);
					*gpioOut = 0x00;
					LedsUpdate();
					usleep(80000);

					// To disable the alarm
					if (*buttons == 0xE) {
						alarmStatus = false;
						*leds = 0;
					}
				}
			} // Alarm not set
			settingAlarm = false;
			switchingAlarm = false;
			*leds = 0;

		}
		if(*uart==1){
			*leds = 0xFFFF;
		}
		else{
			//printf("uart: %d",*uart);
			*leds = 0x0000;
		}
		UpdateTimeDisplays();
		usleep(1000);
	}
	return 0;
}
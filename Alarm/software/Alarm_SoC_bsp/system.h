/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'alarm'
 * SOPC Builder design path: ../../alarm.sopcinfo
 *
 * Generated: Wed Oct 16 23:18:48 CST 2019
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * BUTTONS configuration
 *
 */

#define ALT_MODULE_CLASS_BUTTONS altera_avalon_pio
#define BUTTONS_BASE 0x490a0
#define BUTTONS_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTONS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTONS_CAPTURE 0
#define BUTTONS_DATA_WIDTH 4
#define BUTTONS_DO_TEST_BENCH_WIRING 0
#define BUTTONS_DRIVEN_SIM_VALUE 0
#define BUTTONS_EDGE_TYPE "NONE"
#define BUTTONS_FREQ 50000000
#define BUTTONS_HAS_IN 1
#define BUTTONS_HAS_OUT 0
#define BUTTONS_HAS_TRI 0
#define BUTTONS_IRQ -1
#define BUTTONS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTONS_IRQ_TYPE "NONE"
#define BUTTONS_NAME "/dev/BUTTONS"
#define BUTTONS_RESET_VALUE 0
#define BUTTONS_SPAN 16
#define BUTTONS_TYPE "altera_avalon_pio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00048820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x13
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00020020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x13
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00020000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00048820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x13
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00020020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x13
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00020000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_UP_AVALON_RS232


/*
 * GPIO configuration
 *
 */

#define ALT_MODULE_CLASS_GPIO altera_avalon_pio
#define GPIO_BASE 0x49080
#define GPIO_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define GPIO_CAPTURE 0
#define GPIO_DATA_WIDTH 1
#define GPIO_DO_TEST_BENCH_WIRING 0
#define GPIO_DRIVEN_SIM_VALUE 0
#define GPIO_EDGE_TYPE "NONE"
#define GPIO_FREQ 50000000
#define GPIO_HAS_IN 0
#define GPIO_HAS_OUT 1
#define GPIO_HAS_TRI 0
#define GPIO_IRQ -1
#define GPIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GPIO_IRQ_TYPE "NONE"
#define GPIO_NAME "/dev/GPIO"
#define GPIO_RESET_VALUE 0
#define GPIO_SPAN 16
#define GPIO_TYPE "altera_avalon_pio"


/*
 * HOURS configuration
 *
 */

#define ALT_MODULE_CLASS_HOURS altera_avalon_pio
#define HOURS_BASE 0x49050
#define HOURS_BIT_CLEARING_EDGE_REGISTER 0
#define HOURS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HOURS_CAPTURE 0
#define HOURS_DATA_WIDTH 16
#define HOURS_DO_TEST_BENCH_WIRING 0
#define HOURS_DRIVEN_SIM_VALUE 0
#define HOURS_EDGE_TYPE "NONE"
#define HOURS_FREQ 50000000
#define HOURS_HAS_IN 0
#define HOURS_HAS_OUT 1
#define HOURS_HAS_TRI 0
#define HOURS_IRQ -1
#define HOURS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HOURS_IRQ_TYPE "NONE"
#define HOURS_NAME "/dev/HOURS"
#define HOURS_RESET_VALUE 0
#define HOURS_SPAN 16
#define HOURS_TYPE "altera_avalon_pio"


/*
 * JTAG configuration
 *
 */

#define ALT_MODULE_CLASS_JTAG altera_avalon_jtag_uart
#define JTAG_BASE 0x490d0
#define JTAG_IRQ 0
#define JTAG_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_NAME "/dev/JTAG"
#define JTAG_READ_DEPTH 64
#define JTAG_READ_THRESHOLD 8
#define JTAG_SPAN 8
#define JTAG_TYPE "altera_avalon_jtag_uart"
#define JTAG_WRITE_DEPTH 64
#define JTAG_WRITE_THRESHOLD 8


/*
 * LEDs configuration
 *
 */

#define ALT_MODULE_CLASS_LEDs altera_avalon_pio
#define LEDS_BASE 0x49090
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 10
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 50000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/LEDs"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 16
#define LEDS_TYPE "altera_avalon_pio"


/*
 * MINUTES configuration
 *
 */

#define ALT_MODULE_CLASS_MINUTES altera_avalon_pio
#define MINUTES_BASE 0x49060
#define MINUTES_BIT_CLEARING_EDGE_REGISTER 0
#define MINUTES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MINUTES_CAPTURE 0
#define MINUTES_DATA_WIDTH 16
#define MINUTES_DO_TEST_BENCH_WIRING 0
#define MINUTES_DRIVEN_SIM_VALUE 0
#define MINUTES_EDGE_TYPE "NONE"
#define MINUTES_FREQ 50000000
#define MINUTES_HAS_IN 0
#define MINUTES_HAS_OUT 1
#define MINUTES_HAS_TRI 0
#define MINUTES_IRQ -1
#define MINUTES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MINUTES_IRQ_TYPE "NONE"
#define MINUTES_NAME "/dev/MINUTES"
#define MINUTES_RESET_VALUE 0
#define MINUTES_SPAN 16
#define MINUTES_TYPE "altera_avalon_pio"


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x40000
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "alarm_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 32768
#define RAM_SPAN 32768
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * ROM configuration
 *
 */

#define ALT_MODULE_CLASS_ROM altera_avalon_onchip_memory2
#define ROM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ROM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ROM_BASE 0x20000
#define ROM_CONTENTS_INFO ""
#define ROM_DUAL_PORT 0
#define ROM_GUI_RAM_BLOCK_TYPE "AUTO"
#define ROM_INIT_CONTENTS_FILE "alarm_ROM"
#define ROM_INIT_MEM_CONTENT 1
#define ROM_INSTANCE_ID "NONE"
#define ROM_IRQ -1
#define ROM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ROM_NAME "/dev/ROM"
#define ROM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ROM_RAM_BLOCK_TYPE "AUTO"
#define ROM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ROM_SINGLE_CLOCK_OP 0
#define ROM_SIZE_MULTIPLE 1
#define ROM_SIZE_VALUE 81920
#define ROM_SPAN 81920
#define ROM_TYPE "altera_avalon_onchip_memory2"
#define ROM_WRITABLE 0


/*
 * SECONDS configuration
 *
 */

#define ALT_MODULE_CLASS_SECONDS altera_avalon_pio
#define SECONDS_BASE 0x49070
#define SECONDS_BIT_CLEARING_EDGE_REGISTER 0
#define SECONDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SECONDS_CAPTURE 0
#define SECONDS_DATA_WIDTH 16
#define SECONDS_DO_TEST_BENCH_WIRING 0
#define SECONDS_DRIVEN_SIM_VALUE 0
#define SECONDS_EDGE_TYPE "NONE"
#define SECONDS_FREQ 50000000
#define SECONDS_HAS_IN 0
#define SECONDS_HAS_OUT 1
#define SECONDS_HAS_TRI 0
#define SECONDS_IRQ -1
#define SECONDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SECONDS_IRQ_TYPE "NONE"
#define SECONDS_NAME "/dev/SECONDS"
#define SECONDS_RESET_VALUE 0
#define SECONDS_SPAN 16
#define SECONDS_TYPE "altera_avalon_pio"


/*
 * SWITCHES configuration
 *
 */

#define ALT_MODULE_CLASS_SWITCHES altera_avalon_pio
#define SWITCHES_BASE 0x49040
#define SWITCHES_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHES_CAPTURE 0
#define SWITCHES_DATA_WIDTH 2
#define SWITCHES_DO_TEST_BENCH_WIRING 0
#define SWITCHES_DRIVEN_SIM_VALUE 0
#define SWITCHES_EDGE_TYPE "NONE"
#define SWITCHES_FREQ 50000000
#define SWITCHES_HAS_IN 1
#define SWITCHES_HAS_OUT 0
#define SWITCHES_HAS_TRI 0
#define SWITCHES_IRQ -1
#define SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCHES_IRQ_TYPE "NONE"
#define SWITCHES_NAME "/dev/SWITCHES"
#define SWITCHES_RESET_VALUE 0
#define SWITCHES_SPAN 16
#define SWITCHES_TYPE "altera_avalon_pio"


/*
 * SysID configuration
 *
 */

#define ALT_MODULE_CLASS_SysID altera_avalon_sysid_qsys
#define SYSID_BASE 0x490c0
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/SysID"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1571282238
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_IRQ_BASE NULL
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JTAG"
#define ALT_STDERR_BASE 0x490d0
#define ALT_STDERR_DEV JTAG
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/JTAG"
#define ALT_STDIN_BASE 0x490d0
#define ALT_STDIN_DEV JTAG
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/JTAG"
#define ALT_STDOUT_BASE 0x490d0
#define ALT_STDOUT_DEV JTAG
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "alarm"


/*
 * TimerCore configuration
 *
 */

#define ALT_MODULE_CLASS_TimerCore altera_avalon_timer
#define TIMERCORE_ALWAYS_RUN 0
#define TIMERCORE_BASE 0x49020
#define TIMERCORE_COUNTER_SIZE 32
#define TIMERCORE_FIXED_PERIOD 1
#define TIMERCORE_FREQ 50000000
#define TIMERCORE_IRQ 1
#define TIMERCORE_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMERCORE_LOAD_VALUE 49999999
#define TIMERCORE_MULT 1.0
#define TIMERCORE_NAME "/dev/TimerCore"
#define TIMERCORE_PERIOD 1
#define TIMERCORE_PERIOD_UNITS "s"
#define TIMERCORE_RESET_OUTPUT 0
#define TIMERCORE_SNAPSHOT 1
#define TIMERCORE_SPAN 32
#define TIMERCORE_TICKS_PER_SEC 1
#define TIMERCORE_TIMEOUT_PULSE_OUTPUT 0
#define TIMERCORE_TYPE "altera_avalon_timer"


/*
 * UART configuration
 *
 */

#define ALT_MODULE_CLASS_UART altera_up_avalon_rs232
#define UART_BASE 0x490c8
#define UART_IRQ 2
#define UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_NAME "/dev/UART"
#define UART_SPAN 8
#define UART_TYPE "altera_up_avalon_rs232"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none

#endif /* __SYSTEM_H_ */
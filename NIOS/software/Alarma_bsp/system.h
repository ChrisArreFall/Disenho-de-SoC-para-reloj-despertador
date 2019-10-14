/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'NIOS' in SOPC Builder design 'NIOS_SoC'
 * SOPC Builder design path: ../../NIOS_SoC.sopcinfo
 *
 * Generated: Sun Oct 13 19:37:56 CST 2019
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
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00002820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0xe
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00001020
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
#define ALT_CPU_INST_ADDR_WIDTH 0xe
#define ALT_CPU_NAME "NIOS"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00001000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00002820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0xe
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00001020
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
#define NIOS2_INST_ADDR_WIDTH 0xe
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00001000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2


/*
 * Segment0 configuration
 *
 */

#define ALT_MODULE_CLASS_Segment0 altera_avalon_pio
#define SEGMENT0_BASE 0x30a0
#define SEGMENT0_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT0_CAPTURE 0
#define SEGMENT0_DATA_WIDTH 7
#define SEGMENT0_DO_TEST_BENCH_WIRING 0
#define SEGMENT0_DRIVEN_SIM_VALUE 0
#define SEGMENT0_EDGE_TYPE "NONE"
#define SEGMENT0_FREQ 50000000
#define SEGMENT0_HAS_IN 0
#define SEGMENT0_HAS_OUT 1
#define SEGMENT0_HAS_TRI 0
#define SEGMENT0_IRQ -1
#define SEGMENT0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT0_IRQ_TYPE "NONE"
#define SEGMENT0_NAME "/dev/Segment0"
#define SEGMENT0_RESET_VALUE 0
#define SEGMENT0_SPAN 16
#define SEGMENT0_TYPE "altera_avalon_pio"


/*
 * Segment1 configuration
 *
 */

#define ALT_MODULE_CLASS_Segment1 altera_avalon_pio
#define SEGMENT1_BASE 0x3080
#define SEGMENT1_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT1_CAPTURE 0
#define SEGMENT1_DATA_WIDTH 7
#define SEGMENT1_DO_TEST_BENCH_WIRING 0
#define SEGMENT1_DRIVEN_SIM_VALUE 0
#define SEGMENT1_EDGE_TYPE "NONE"
#define SEGMENT1_FREQ 50000000
#define SEGMENT1_HAS_IN 0
#define SEGMENT1_HAS_OUT 1
#define SEGMENT1_HAS_TRI 0
#define SEGMENT1_IRQ -1
#define SEGMENT1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT1_IRQ_TYPE "NONE"
#define SEGMENT1_NAME "/dev/Segment1"
#define SEGMENT1_RESET_VALUE 0
#define SEGMENT1_SPAN 16
#define SEGMENT1_TYPE "altera_avalon_pio"


/*
 * Segment2 configuration
 *
 */

#define ALT_MODULE_CLASS_Segment2 altera_avalon_pio
#define SEGMENT2_BASE 0x3060
#define SEGMENT2_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT2_CAPTURE 0
#define SEGMENT2_DATA_WIDTH 7
#define SEGMENT2_DO_TEST_BENCH_WIRING 0
#define SEGMENT2_DRIVEN_SIM_VALUE 0
#define SEGMENT2_EDGE_TYPE "NONE"
#define SEGMENT2_FREQ 50000000
#define SEGMENT2_HAS_IN 0
#define SEGMENT2_HAS_OUT 1
#define SEGMENT2_HAS_TRI 0
#define SEGMENT2_IRQ -1
#define SEGMENT2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT2_IRQ_TYPE "NONE"
#define SEGMENT2_NAME "/dev/Segment2"
#define SEGMENT2_RESET_VALUE 0
#define SEGMENT2_SPAN 16
#define SEGMENT2_TYPE "altera_avalon_pio"


/*
 * Segment3 configuration
 *
 */

#define ALT_MODULE_CLASS_Segment3 altera_avalon_pio
#define SEGMENT3_BASE 0x3070
#define SEGMENT3_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT3_CAPTURE 0
#define SEGMENT3_DATA_WIDTH 7
#define SEGMENT3_DO_TEST_BENCH_WIRING 0
#define SEGMENT3_DRIVEN_SIM_VALUE 0
#define SEGMENT3_EDGE_TYPE "NONE"
#define SEGMENT3_FREQ 50000000
#define SEGMENT3_HAS_IN 0
#define SEGMENT3_HAS_OUT 1
#define SEGMENT3_HAS_TRI 0
#define SEGMENT3_IRQ -1
#define SEGMENT3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT3_IRQ_TYPE "NONE"
#define SEGMENT3_NAME "/dev/Segment3"
#define SEGMENT3_RESET_VALUE 0
#define SEGMENT3_SPAN 16
#define SEGMENT3_TYPE "altera_avalon_pio"


/*
 * Segment4 configuration
 *
 */

#define ALT_MODULE_CLASS_Segment4 altera_avalon_pio
#define SEGMENT4_BASE 0x3050
#define SEGMENT4_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT4_CAPTURE 0
#define SEGMENT4_DATA_WIDTH 7
#define SEGMENT4_DO_TEST_BENCH_WIRING 0
#define SEGMENT4_DRIVEN_SIM_VALUE 0
#define SEGMENT4_EDGE_TYPE "NONE"
#define SEGMENT4_FREQ 50000000
#define SEGMENT4_HAS_IN 0
#define SEGMENT4_HAS_OUT 1
#define SEGMENT4_HAS_TRI 0
#define SEGMENT4_IRQ -1
#define SEGMENT4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT4_IRQ_TYPE "NONE"
#define SEGMENT4_NAME "/dev/Segment4"
#define SEGMENT4_RESET_VALUE 0
#define SEGMENT4_SPAN 16
#define SEGMENT4_TYPE "altera_avalon_pio"


/*
 * Segment5 configuration
 *
 */

#define ALT_MODULE_CLASS_Segment5 altera_avalon_pio
#define SEGMENT5_BASE 0x3040
#define SEGMENT5_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENT5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENT5_CAPTURE 0
#define SEGMENT5_DATA_WIDTH 7
#define SEGMENT5_DO_TEST_BENCH_WIRING 0
#define SEGMENT5_DRIVEN_SIM_VALUE 0
#define SEGMENT5_EDGE_TYPE "NONE"
#define SEGMENT5_FREQ 50000000
#define SEGMENT5_HAS_IN 0
#define SEGMENT5_HAS_OUT 1
#define SEGMENT5_HAS_TRI 0
#define SEGMENT5_IRQ -1
#define SEGMENT5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENT5_IRQ_TYPE "NONE"
#define SEGMENT5_NAME "/dev/Segment5"
#define SEGMENT5_RESET_VALUE 0
#define SEGMENT5_SPAN 16
#define SEGMENT5_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/UART"
#define ALT_STDERR_BASE 0x3000
#define ALT_STDERR_DEV UART
#define ALT_STDERR_IS_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_uart"
#define ALT_STDIN "/dev/UART"
#define ALT_STDIN_BASE 0x3000
#define ALT_STDIN_DEV UART
#define ALT_STDIN_IS_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_uart"
#define ALT_STDOUT "/dev/UART"
#define ALT_STDOUT_BASE 0x3000
#define ALT_STDOUT_DEV UART
#define ALT_STDOUT_IS_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_uart"
#define ALT_SYSTEM_NAME "NIOS_SoC"


/*
 * Timer configuration
 *
 */

#define ALT_MODULE_CLASS_Timer altera_avalon_timer
#define TIMER_ALWAYS_RUN 1
#define TIMER_BASE 0x3020
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 0
#define TIMER_FREQ 50000000
#define TIMER_IRQ 0
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 49999999
#define TIMER_MULT 1.0
#define TIMER_NAME "/dev/Timer"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "s"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1
#define TIMER_TIMEOUT_PULSE_OUTPUT 1
#define TIMER_TYPE "altera_avalon_timer"


/*
 * UART configuration
 *
 */

#define ALT_MODULE_CLASS_UART altera_avalon_uart
#define UART_BASE 0x3000
#define UART_BAUD 115200
#define UART_DATA_BITS 8
#define UART_FIXED_BAUD 1
#define UART_FREQ 50000000
#define UART_IRQ 1
#define UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_NAME "/dev/UART"
#define UART_PARITY 'N'
#define UART_SIM_CHAR_STREAM ""
#define UART_SIM_TRUE_BAUD 0
#define UART_SPAN 32
#define UART_STOP_BITS 1
#define UART_SYNC_REG_DEPTH 2
#define UART_TYPE "altera_avalon_uart"
#define UART_USE_CTS_RTS 0
#define UART_USE_EOP_REGISTER 0


/*
 * button configuration
 *
 */

#define ALT_MODULE_CLASS_button altera_avalon_pio
#define BUTTON_BASE 0x3090
#define BUTTON_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_CAPTURE 0
#define BUTTON_DATA_WIDTH 4
#define BUTTON_DO_TEST_BENCH_WIRING 0
#define BUTTON_DRIVEN_SIM_VALUE 0
#define BUTTON_EDGE_TYPE "NONE"
#define BUTTON_FREQ 50000000
#define BUTTON_HAS_IN 1
#define BUTTON_HAS_OUT 0
#define BUTTON_HAS_TRI 0
#define BUTTON_IRQ -1
#define BUTTON_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON_IRQ_TYPE "NONE"
#define BUTTON_NAME "/dev/button"
#define BUTTON_RESET_VALUE 0
#define BUTTON_SPAN 16
#define BUTTON_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * memory configuration
 *
 */

#define ALT_MODULE_CLASS_memory altera_avalon_onchip_memory2
#define MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define MEMORY_BASE 0x1000
#define MEMORY_CONTENTS_INFO ""
#define MEMORY_DUAL_PORT 0
#define MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define MEMORY_INIT_CONTENTS_FILE "NIOS_SoC_memory"
#define MEMORY_INIT_MEM_CONTENT 1
#define MEMORY_INSTANCE_ID "NONE"
#define MEMORY_IRQ -1
#define MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MEMORY_NAME "/dev/memory"
#define MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define MEMORY_RAM_BLOCK_TYPE "AUTO"
#define MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define MEMORY_SINGLE_CLOCK_OP 0
#define MEMORY_SIZE_MULTIPLE 1
#define MEMORY_SIZE_VALUE 4096
#define MEMORY_SPAN 4096
#define MEMORY_TYPE "altera_avalon_onchip_memory2"
#define MEMORY_WRITABLE 1

#endif /* __SYSTEM_H_ */

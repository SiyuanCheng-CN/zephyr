/*
 * Copyright (c) 2023 Synopsys
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_PINCTRL_EMSDP_PINCTRL_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_PINCTRL_EMSDP_PINCTRL_H_

#define EMSDP_CREG_BASE		   (0xf0001000)
#define EMSDP_CREG_PMOD_MUX_OFFSET (0x0030)

/**
 * Mux Control Register Index
 */
#define PMOD_MUX_CTRL 0 /*!< 32-bits, offset 0x0 */

#define ARDUINO_MUX_CTRL 4 /*!< 32-bits, offset 0x4 */

#define GENERIC_MUX_CTRL 8 /*!< 32-bits, offset 0x8 */

#define MUX_SEL0_OFFSET (0)
#define MUX_SEL1_OFFSET (4)
#define MUX_SEL2_OFFSET (8)
#define MUX_SEL3_OFFSET (12)
#define MUX_SEL4_OFFSET (16)
#define MUX_SEL5_OFFSET (20)
#define MUX_SEL6_OFFSET (24)
#define MUX_SEL7_OFFSET (28)

#define MUX_SEL0_MASK (0xf << MUX_SEL0_OFFSET)
#define MUX_SEL1_MASK (0xf << MUX_SEL1_OFFSET)
#define MUX_SEL2_MASK (0xf << MUX_SEL2_OFFSET)
#define MUX_SEL3_MASK (0xf << MUX_SEL3_OFFSET)
#define MUX_SEL4_MASK (0xf << MUX_SEL4_OFFSET)
#define MUX_SEL5_MASK (0xf << MUX_SEL5_OFFSET)
#define MUX_SEL6_MASK (0xf << MUX_SEL6_OFFSET)
#define MUX_SEL7_MASK (0xf << MUX_SEL7_OFFSET)

/**
 * Default pin muxer settings
 */
#define PMOD_MUX_CTRL_DEFAULT	 (0) /*!< all pins are configured as GPIO inputs as default */
#define ARDUINO_MUX_CTRL_DEFAULT (0) /*!< Default Arduino mode */
#define GENERIC_MUX_CTRL_DEFAULT (0) /*!< Default generic mux mode */

/**
 * PMOD A Multiplexor
 */
#define PM_A_CFG0_GPIO	 ((0) << MUX_SEL0_OFFSET)
#define PM_A_CFG0_I2C	 ((1) << MUX_SEL0_OFFSET) /* io_i2c_mst2 */
#define PM_A_CFG0_SPI	 ((2) << MUX_SEL0_OFFSET) /* io_spi_mst1, cs_0 */
#define PM_A_CFG0_UART1a ((3) << MUX_SEL0_OFFSET) /* io_uart1 */
#define PM_A_CFG0_UART1b ((4) << MUX_SEL0_OFFSET) /* io_uart1 */
#define PM_A_CFG0_PWM1	 ((5) << MUX_SEL0_OFFSET)
#define PM_A_CFG0_PWM2	 ((6) << MUX_SEL0_OFFSET)

#define PM_A_CFG1_GPIO ((0) << MUX_SEL1_OFFSET)

/**
 * PMOD B Multiplexor
 */
#define PM_B_CFG0_GPIO	 ((0) << MUX_SEL2_OFFSET)
#define PM_B_CFG0_I2C	 ((1) << MUX_SEL2_OFFSET) /* io_i2c_mst2 */
#define PM_B_CFG0_SPI	 ((2) << MUX_SEL2_OFFSET) /* io_spi_mst1, cs_1 */
#define PM_B_CFG0_UART2a ((3) << MUX_SEL2_OFFSET) /* io_uart2 */
#define PM_B_CFG0_UART2b ((4) << MUX_SEL2_OFFSET) /* io_uart2 */
#define PM_B_CFG0_PWM1	 ((5) << MUX_SEL2_OFFSET)
#define PM_B_CFG0_PWM2	 ((6) << MUX_SEL2_OFFSET)

#define PM_B_CFG1_GPIO ((0) << MUX_SEL3_OFFSET)

/**
 * PMOD C Multiplexor
 */
#define PM_C_CFG0_GPIO	 ((0) << MUX_SEL4_OFFSET)
#define PM_C_CFG0_I2C	 ((1) << MUX_SEL4_OFFSET) /* io_i2c_mst2 */
#define PM_C_CFG0_SPI	 ((2) << MUX_SEL4_OFFSET) /* io_spi_mst1, cs_2 */
#define PM_C_CFG0_UART3a ((3) << MUX_SEL4_OFFSET) /* io_uart3 */
#define PM_C_CFG0_UART3b ((4) << MUX_SEL4_OFFSET) /* io_uart3 */
#define PM_C_CFG0_PWM1	 ((5) << MUX_SEL4_OFFSET)
#define PM_C_CFG0_PWM2	 ((6) << MUX_SEL4_OFFSET)

#define PM_C_CFG1_GPIO ((0) << MUX_SEL5_OFFSET)

/**
 * Arduino Multiplexor
 */
#define ARDUINO_CFG0_GPIO ((0) << MUX_SEL0_OFFSET)
#define ARDUINO_CFG0_UART ((1) << MUX_SEL0_OFFSET) /* io_uart0 */

#define ARDUINO_CFG1_GPIO ((0) << MUX_SEL1_OFFSET)
#define ARDUINO_CFG1_PWM  ((1) << MUX_SEL1_OFFSET)

#define ARDUINO_CFG2_GPIO ((0) << MUX_SEL2_OFFSET)
#define ARDUINO_CFG2_PWM  ((1) << MUX_SEL2_OFFSET)

#define ARDUINO_CFG3_GPIO ((0) << MUX_SEL3_OFFSET)
#define ARDUINO_CFG3_PWM  ((1) << MUX_SEL3_OFFSET)

#define ARDUINO_CFG4_GPIO ((0) << MUX_SEL4_OFFSET)
#define ARDUINO_CFG4_PWM  ((1) << MUX_SEL4_OFFSET)

#define ARDUINO_CFG5_GPIO ((0) << MUX_SEL5_OFFSET)
#define ARDUINO_CFG5_SPI  ((1) << MUX_SEL5_OFFSET) /* io_spi_mst0, cs_0 */
#define ARDUINO_CFG5_PWM1 ((2) << MUX_SEL5_OFFSET)
#define ARDUINO_CFG5_PWM2 ((3) << MUX_SEL5_OFFSET)
#define ARDUINO_CFG5_PWM3 ((4) << MUX_SEL5_OFFSET)

#define ARDUINO_CFG6_GPIO ((0) << MUX_SEL6_OFFSET)
#define ARDUINO_CFG6_I2C  ((1) << MUX_SEL6_OFFSET) /* io_i2c_mst1 */

/**
 * Generic  Multiplexor
 * GPIO | EBI | Host-IF | DBG
 */
#define GENERIC_CFG0_GPIO   ((0) << MUX_SEL0_OFFSET)
#define GENERIC_CFG0_EBI    ((1) << MUX_SEL0_OFFSET)
#define GENERIC_CFG0_HOSTIF ((2) << MUX_SEL0_OFFSET)
#define GENERIC_CFG0_DBG    ((3) << MUX_SEL0_OFFSET)

#define IO_PINMUX_ENABLE  1
#define IO_PINMUX_DISABLE 0

#define PMOD_A              0
#define PMOD_B              1
#define PMOD_C              2
#define ARDUINO_PIN_0       3
#define ARDUINO_PIN_1       4
#define ARDUINO_PIN_2       5
#define ARDUINO_PIN_3       6
#define ARDUINO_PIN_4       7
#define ARDUINO_PIN_5       8
#define ARDUINO_PIN_6       9
#define ARDUINO_PIN_7       10
#define ARDUINO_PIN_8       11
#define ARDUINO_PIN_9       12
#define ARDUINO_PIN_10      13
#define ARDUINO_PIN_11      14
#define ARDUINO_PIN_12      15
#define ARDUINO_PIN_13      16
#define ARDUINO_PIN_AD0     17
#define ARDUINO_PIN_AD1     18
#define ARDUINO_PIN_AD2     19
#define ARDUINO_PIN_AD3     20
#define ARDUINO_PIN_AD4     21
#define ARDUINO_PIN_AD5     22

#define PMOD_GPIO           0
#define PMOD_UART           1
#define PMOD_SPI            2
#define PMOD_I2C            3
#define PMOD_PWM_MODE1      4
#define PMOD_PWM_MODE2      5
#define PMOD_PWM_MODE3      6
#define ARDUINO_GPIO        7
#define ARDUINO_UART        8
#define ARDUINO_SPI         9
#define ARDUINO_I2C         10
#define ARDUINO_PWM         11
#define ARDUINO_ADC         12


#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_PINCTRL_EMSDP_PINCTRL_H_ */

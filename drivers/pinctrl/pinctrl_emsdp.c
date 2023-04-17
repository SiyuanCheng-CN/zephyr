/*
 * Copyright (c) 2023 Synopsys
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define DT_DRV_COMPAT snps_emsdp_pinctrl

#include <zephyr/arch/cpu.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/pinctrl.h>
#include <zephyr/dt-bindings/pinctrl/emsdp-pinctrl.h>

static uint32_t mux_regs;

void set_pmod_mux(uint32_t val)
{
	sys_write32(val, mux_regs | PMOD_MUX_CTRL);
}

uint32_t get_pmod_mux(void)
{
	return sys_read32(mux_regs | PMOD_MUX_CTRL);
}

void set_arduino_mux(uint32_t val)
{
	sys_write32(val, mux_regs | ARDUINO_MUX_CTRL);
}

uint32_t get_arduino_mux(void)
{
	return sys_read32(mux_regs | ARDUINO_MUX_CTRL);
}

static int pinctrl_emsdp_set(uint32_t pin, uint32_t type)
{
	mux_regs = (EMSDP_CREG_BASE | EMSDP_CREG_PMOD_MUX_OFFSET);
	uint32_t reg;

	if (pin <= PMOD_C) {
		reg = get_pmod_mux();
	} else {
		reg = get_arduino_mux();
	}

	switch (pin) {
	case PMOD_A:
		reg &= ~(MUX_SEL0_MASK);
		switch (type) {
		case PMOD_GPIO:
			reg |= PM_A_CFG0_GPIO;
			break;
		case PMOD_UART:
			reg |= PM_A_CFG0_UART1b;
			break;
		case PMOD_SPI:
			reg |= PM_A_CFG0_SPI;
			break;
		case PMOD_I2C:
			reg |= PM_A_CFG0_I2C;
			break;
		case PMOD_PWM_MODE1:
			reg |= PM_A_CFG0_PWM1;
			break;
		case PMOD_PWM_MODE2:
			reg |= PM_A_CFG0_PWM2;
			break;
		default:
			break;
		}
		break;
	case PMOD_B:
		reg &= ~(MUX_SEL2_MASK);
		switch (type) {
		case PMOD_GPIO:
			reg |= PM_B_CFG0_GPIO;
			break;
		case PMOD_UART:
			reg |= PM_B_CFG0_UART2b;
			break;
		case PMOD_SPI:
			reg |= PM_B_CFG0_SPI;
			break;
		case PMOD_I2C:
			reg |= PM_B_CFG0_I2C;
			break;
		case PMOD_PWM_MODE1:
			reg |= PM_B_CFG0_PWM1;
			break;
		case PMOD_PWM_MODE2:
			reg |= PM_B_CFG0_PWM2;
			break;
		default:
			break;
		}
		break;
	case PMOD_C:
		reg &= ~(MUX_SEL4_MASK);
		switch (type) {
		case PMOD_GPIO:
			reg |= PM_C_CFG0_GPIO;
			break;
		case PMOD_UART:
			reg |= PM_C_CFG0_UART3b;
			break;
		case PMOD_SPI:
			reg |= PM_C_CFG0_SPI;
			break;
		case PMOD_I2C:
			reg |= PM_C_CFG0_I2C;
			break;
		case PMOD_PWM_MODE1:
			reg |= PM_C_CFG0_PWM1;
			break;
		case PMOD_PWM_MODE2:
			reg |= PM_C_CFG0_PWM2;
			break;
		default:
			break;
		}
		break;
	case ARDUINO_PIN_0:
	case ARDUINO_PIN_1:
		reg &= ~MUX_SEL0_MASK;
		if (type == ARDUINO_GPIO) {
			reg |= ARDUINO_CFG0_GPIO;
		} else if (type == ARDUINO_UART) {
			reg |= ARDUINO_CFG0_UART;
		}
		break;
	case ARDUINO_PIN_2:
	case ARDUINO_PIN_3:
		reg &= ~MUX_SEL1_MASK;
		if (type == ARDUINO_GPIO) {
			reg |= ARDUINO_CFG1_GPIO;
		} else if (type == ARDUINO_PWM) {
			reg |= ARDUINO_CFG1_PWM;
		}
		break;
	case ARDUINO_PIN_4:
	case ARDUINO_PIN_5:
		reg &= ~MUX_SEL2_MASK;
		if (type == ARDUINO_GPIO) {
			reg |= ARDUINO_CFG2_GPIO;
		} else if (type == ARDUINO_PWM) {
			reg |= ARDUINO_CFG2_PWM;
		}
		break;
	case ARDUINO_PIN_6:
	case ARDUINO_PIN_7:
		reg &= ~MUX_SEL3_MASK;
		if (type == ARDUINO_GPIO) {
			reg |= ARDUINO_CFG3_GPIO;
		} else if (type == ARDUINO_PWM) {
			reg |= ARDUINO_CFG3_PWM;
		}
		break;
	case ARDUINO_PIN_8:
	case ARDUINO_PIN_9:
		reg &= ~MUX_SEL4_MASK;
		if (type == ARDUINO_GPIO) {
			reg |= ARDUINO_CFG4_GPIO;
		} else if (type == ARDUINO_PWM) {
			reg |= ARDUINO_CFG4_PWM;
		}
		break;
	case ARDUINO_PIN_10:
	case ARDUINO_PIN_11:
	case ARDUINO_PIN_12:
	case ARDUINO_PIN_13:
		reg &= ~MUX_SEL5_MASK;
		if (type == ARDUINO_GPIO) {
			reg |= ARDUINO_CFG5_GPIO;
		} else if (type == ARDUINO_SPI) {
			reg |= ARDUINO_CFG5_SPI;
		} else if (type == ARDUINO_PWM) {
			reg |= ARDUINO_CFG5_PWM1;
		}
		break;
	case ARDUINO_PIN_AD4:
	case ARDUINO_PIN_AD5:
		reg &= ~MUX_SEL6_MASK;
		if (type == ARDUINO_GPIO) {
			reg |= ARDUINO_CFG6_GPIO;
		} else if (type == ARDUINO_I2C) {
			reg |= ARDUINO_CFG6_I2C;
		}
		break;
	default:
		break;
	}

	if (pin <= PMOD_C) {
		set_pmod_mux(reg);
	} else {
		set_arduino_mux(reg);
	}

	return 0;
}

int pinctrl_configure_pins(const pinctrl_soc_pin_t *pins, uint8_t pin_cnt, uintptr_t reg)
{
	ARG_UNUSED(reg);
	int i;

	for (i = 0; i < pin_cnt; i++) {
		pinctrl_emsdp_set(pins[i].pin, pins[i].type);
	}

	return 0;
}

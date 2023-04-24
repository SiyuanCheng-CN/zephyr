/*
 * Copyright (c) 2023 Synopsys
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/arch/cpu.h>

#define DW_SPI_REG_CLK_ENA		(0x16)  /* DFSS only */

void z_extra_clock_on(uint32_t addr)
{
	sys_out32(1, addr + DW_SPI_REG_CLK_ENA);
}

void z_extra_clock_off(uint32_t addr)
{
	sys_out32(0, addr + DW_SPI_REG_CLK_ENA);
}

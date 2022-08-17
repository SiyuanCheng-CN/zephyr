/**
 * @file
 * @brief ARC specific dsp register macros
 */

/*
 * Copyright (c) 2022, Synopsys.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _DSP_REGS_ARC_H
#define _DSP_REGS_ARC_H

#include <zephyr/toolchain.h>
#include "dsp_context.h"

/**
 *
 * @brief Load all dsp registers
 *
 * This function loads ALL dsp registers pointed to by @a regs.
 * It is expected that a subsequent call to _store_all_dsp_registers()
 * will be issued to dump the dsp registers to memory.
 *
 * The format/organization of 'struct dsp_register_set'; the generic C test
 * code (main.c) merely treat the register set as an array of bytes.
 *
 * The only requirement is that the arch specific implementations of
 * _load_all_dsp_registers() and _store_all_dsp_registers() agree
 * on the format.
 *
 */
static inline void _load_all_dsp_registers(struct dsp_register_set *regs)
{
	uint32_t temp = 0;

	__asm__ volatile (
		"ld %1, [%0, 0];\n\t"
		"sr %1, [%2];\n\t"
		: : "r" (regs), "r" (temp),
		"i"(_ARC_V2_DSP_BFLY0)
		: "memory"
		);
}

/**
 *
 * @brief Dump all dsp registers to memory
 *
 * This function stores ALL dsp registers to the memory buffer
 * specified by @a regs. It is expected that a previous invocation of
 * _load_all_dsp_registers() occurred to load all the dsp
 * registers from a memory buffer.
 *
 */

static inline void _store_all_dsp_registers(struct dsp_register_set *regs)
{
	uint32_t temp = 0;

	__asm__ volatile (
		"lr %1, [%2];\n\t"
		"st %1, [%0, 0];\n\t"
		: : "r" (regs), "r" (temp),
		"i"(_ARC_V2_DSP_BFLY0)
		);
}

/**
 *
 * @brief Load then dump all dsp registers to memory
 *
 * This function loads ALL dsp registers from the memory buffer
 * specified by @a regs, and then stores them back to that buffer.
 *
 * This routine is called by a high priority thread prior to calling a primitive
 * that pends and triggers a co-operative context switch to a low priority
 * thread.
 *
 */

static inline void _load_then_store_all_dsp_registers(struct dsp_register_set
							*regs)
{
	_load_all_dsp_registers(regs);
	_store_all_dsp_registers(regs);
}
#endif /* _DSP_REGS_ARC_H */

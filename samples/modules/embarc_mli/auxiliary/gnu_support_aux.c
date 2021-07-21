/*
 * Copyright (c) 2021 Synopsys.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _ARC

#include <stdint.h>
#define _Interrupt __attribute__((interrupt("ilink")))
#define _lr __builtin_arc_lr
#define _sr __builtin_arc_sr
#define _Uncached volatile

unsigned int __JLI_TABLE__[1];

typedef struct {
	void (*target)();
} vect_entry_type;

#define INT_VECTOR_BASE 0x25
#define VECT_START _lr(INT_VECTOR_BASE)
#define IRQ_INTERRUPT 0x40b
#define IRQ_PRIORITY 0x206
#define IDENTITY 0x0004
#define STATUS32 0x000a
#define ISA_CONFIG 0x00c1

void _setvecti(int vector, _Interrupt void (*target)())
{
	volatile vect_entry_type *vtab = (_Uncached vect_entry_type *)VECT_START;
	vtab[vector].target = (void (*)())target;
}

void _sleep(int n)
{

}

void _init_ad(void)
{
	uint32_t stat32 = _lr(STATUS32) | 0x80000;

	__builtin_arc_flag(stat32);
}

int start_init(void)
{
	uint32_t status = 0; /* OK */
	uint32_t identity_rg = _lr(IDENTITY);

	if ((identity_rg & 0xff) > 0x40) {
		/* ARCv2EM */
		uint32_t isa = _lr(ISA_CONFIG);

		if (isa & 0x400000) { /* check processor support unaligned accesses */
			_init_ad(); /* allows unaligned accesses */
		} else {
			status = 1; /* Error */
		}
	} else {
		status = 1; /* Error */
	}

	return status;
}

#endif

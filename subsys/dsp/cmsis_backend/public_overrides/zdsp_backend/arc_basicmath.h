/* Copyright (c) 2022 Google LLC
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef SUBSYS_MATH_CMSIS_BACKEND_PUBLIC_ZDSP_BACKEND_BASICMATH_H_
#define SUBSYS_MATH_CMSIS_BACKEND_PUBLIC_ZDSP_BACKEND_BASICMATH_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "dsplib.h"
#include <arm_math.h>

#define DEF_ZDSP_MAP(op, type)                                                                     \
	static inline void zdsp_##op(const __xy type * __restrict src_a, const __xy type * __restrict src_b, __xy type * __restrict dst,              \
				     uint32_t block_size)                                          \
	{                                                                                          \
		dsp_##op(src_a, src_b, dst, block_size);                                           \
	}

DEF_ZDSP_MAP(mult_q7, q7_t)
DEF_ZDSP_MAP(mult_q15, q15_t)
DEF_ZDSP_MAP(mult_q31, q31_t)
DEF_ZDSP_MAP(mult_f32, f32_t)

DEF_ZDSP_MAP(add_q7, q7_t)
DEF_ZDSP_MAP(add_q15, q15_t)
DEF_ZDSP_MAP(add_q31, q31_t)
DEF_ZDSP_MAP(add_f32, f32_t)

DEF_ZDSP_MAP(sub_q7, q7_t)
DEF_ZDSP_MAP(sub_q15, q15_t)
DEF_ZDSP_MAP(sub_q31, q31_t)
DEF_ZDSP_MAP(sub_f32, f32_t)

#undef DEF_ZDSP_MAP
#define DEF_ZDSP_MAP(op, type)                                                                     \
	static inline void zdsp_##op(const __xy type * __restrict src, type scale_fract, int8_t shift, __xy type * __restrict dst,   \
				     uint32_t block_size)                                          \
	{                                                                                          \
		dsp_##op(src, scale_fract, shift, dst, block_size);                                \
	}

DEF_ZDSP_MAP(scale_q7, q7_t)
DEF_ZDSP_MAP(scale_q15, q15_t)
DEF_ZDSP_MAP(scale_q31, q31_t)

static inline void zdsp_scale_f32(const __xy float32_t * __restrict src, float32_t scale, __xy float32_t * __restrict dst,
				  uint32_t block_size)
{
	dsp_scale_f32(src, scale, dst, block_size);
}

#undef DEF_ZDSP_MAP
#define DEF_ZDSP_MAP(op, type)                                                                     \
	static inline void zdsp_##op(const __xy type * __restrict src, __xy type * __restrict dst, uint32_t block_size)              \
	{                                                                                          \
		dsp_##op(src, dst, block_size);                                                    \
	}

DEF_ZDSP_MAP(abs_q7, q7_t)
DEF_ZDSP_MAP(abs_q15, q15_t)
DEF_ZDSP_MAP(abs_q31, q31_t)
DEF_ZDSP_MAP(abs_f32, f32_t)

DEF_ZDSP_MAP(negate_q7, q7_t)
DEF_ZDSP_MAP(negate_q15, q15_t)
DEF_ZDSP_MAP(negate_q31, q31_t)
DEF_ZDSP_MAP(negate_f32, f32_t)

#undef DEF_ZDSP_MAP
#define DEF_ZDSP_MAP(op, type, res_type)                                                           \
	static inline void zdsp_##op(const __xy type * __restrict src_a, const __xy type * __restrict src_b, uint32_t block_size,    \
				     res_type * __restrict dst)                                                \
	{                                                                                          \
		dsp_##op(src_a, src_b, block_size, dst);                                           \
	}

DEF_ZDSP_MAP(dot_prod_q7, q7_t, q31_t)
DEF_ZDSP_MAP(dot_prod_q15, q15_t, q63_t)
DEF_ZDSP_MAP(dot_prod_q31, q31_t, q63_t)
DEF_ZDSP_MAP(dot_prod_f32, f32_t, f32_t)

#undef DEF_ZDSP_MAP
#define DEF_ZDSP_MAP(op, type)                                                                     \
	static inline void zdsp_##op(const __xy type * __restrict src, int8_t shift_bits, __xy type * __restrict dst,                \
				     uint32_t block_size)                                          \
	{                                                                                          \
		dsp_##op(src, shift_bits, dst, block_size);                                        \
	}

DEF_ZDSP_MAP(shift_q7, q7_t)
DEF_ZDSP_MAP(shift_q15, q15_t)
DEF_ZDSP_MAP(shift_q31, q31_t)

#undef DEF_ZDSP_MAP
#define DEF_ZDSP_MAP(op, type)                                                                     \
	static inline void zdsp_##op(const __xy type * __restrict src, type offset, __xy type * __restrict dst, uint32_t block_size) \
	{                                                                                          \
		dsp_##op(src, offset, dst, block_size);                                            \
	}

DEF_ZDSP_MAP(offset_q7, q7_t)
DEF_ZDSP_MAP(offset_q15, q15_t)
DEF_ZDSP_MAP(offset_q31, q31_t)
DEF_ZDSP_MAP(offset_f32, f32_t)

#undef DEF_ZDSP_MAP
#define DEF_ZDSP_MAP(op, type)                                                                     \
	static inline void zdsp_##op(const __xy type * __restrict src, __xy type * __restrict dst, type low, type high,              \
				     uint32_t num_samples)                                         \
	{                                                                                          \
		arm_##op(src, dst, low, high, num_samples);                                        \
	}

DEF_ZDSP_MAP(clip_q7, q7_t)
DEF_ZDSP_MAP(clip_q15, q15_t)
DEF_ZDSP_MAP(clip_q31, q31_t)
DEF_ZDSP_MAP(clip_f32, float32_t)

#undef DEF_ZDSP_MAP
#define DEF_ZDSP_MAP(op, type)                                                                     \
	static inline void zdsp_##op##_u##type(const __xy uint##type##_t * __restrict src_a,                        \
					       const __xy uint##type##_t * __restrict src_b, __xy uint##type##_t * __restrict dst,   \
					       uint32_t block_size)                                \
	{                                                                                          \
		arm_##op##_u##type(src_a, src_b, dst, block_size);                                 \
	}

DEF_ZDSP_MAP(and, 8)
DEF_ZDSP_MAP(and, 16)
DEF_ZDSP_MAP(and, 32)

DEF_ZDSP_MAP(or, 8)
DEF_ZDSP_MAP(or, 16)
DEF_ZDSP_MAP(or, 32)

DEF_ZDSP_MAP(xor, 8)
DEF_ZDSP_MAP(xor, 16)
DEF_ZDSP_MAP(xor, 32)

#undef DEF_ZDSP_MAP
#define DEF_ZDSP_MAP(op, type)                                                                     \
	static inline void zdsp_##op##_u##type(const __xy uint##type##_t * __restrict src, __xy uint##type##_t * __restrict dst,     \
					       uint32_t block_size)                                \
	{                                                                                          \
		arm_##op##_u##type(src, dst, block_size);                                          \
	}

DEF_ZDSP_MAP(not, 8)
DEF_ZDSP_MAP(not, 16)
DEF_ZDSP_MAP(not, 32)

#ifdef __cplusplus
}
#endif

#endif /* SUBSYS_MATH_CMSIS_BACKEND_PUBLIC_ZDSP_BACKEND_BASICMATH_H_ */

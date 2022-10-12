/* Copyright (c) 2022 Google LLC
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef INCLUDE_ZEPHYR_MATH_DSP_BASICMATH_H_
#define INCLUDE_ZEPHYR_MATH_DSP_BASICMATH_H_

#ifdef __cplusplus
extern "C" {
#endif

#ifdef CONFIG_DSP_BACKEND_MWDT_DSPLIB
/**
 * @defgroup groupMath Basic Math Functions
 */

/**
 * @brief Q7 vector multiplication.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_mult_q7(const __xy q7_t * __restrict src_a, const __xy q7_t * __restrict src_b, __xy q7_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief Q15 vector multiplication.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_mult_q15(const __xy q15_t * __restrict src_a, __xy const q15_t * __restrict src_b, __xy q15_t * __restrict dst,
				  uint32_t block_size);

/**
 * @brief Q31 vector multiplication.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_mult_q31(const __xy q31_t * __restrict src_a, const __xy q31_t * __restrict src_b, __xy q31_t * __restrict dst,
				  uint32_t block_size);

/**
 * @brief Floating-point vector multiplication.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_mult_f32(const __xy float32_t * __restrict src_a, const __xy float32_t * __restrict src_b, __xy float32_t * __restrict dst,
				  uint32_t block_size);

/**
 * @brief Floating-point vector addition.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_add_f32(const __xy float32_t * __restrict src_a, const __xy float32_t * __restrict src_b, __xy float32_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief Q7 vector addition.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_add_q7(const __xy q7_t * __restrict src_a, const __xy q7_t * __restrict src_b, __xy q7_t * __restrict dst,
				uint32_t block_size);

/**
 * @brief Q15 vector addition.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_add_q15(const __xy q15_t * __restrict src_a, const __xy q15_t * __restrict src_b, __xy q15_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief Q31 vector addition.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_add_q31(const __xy q31_t * __restrict src_a, const __xy q31_t * __restrict src_b, __xy q31_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief Floating-point vector subtraction.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_sub_f32(const __xy float32_t * __restrict src_a, const __xy float32_t * __restrict src_b, __xy float32_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief Q7 vector subtraction.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_sub_q7(const __xy q7_t * __restrict src_a, const __xy q7_t * __restrict src_b, __xy q7_t * __restrict dst,
				uint32_t block_size);

/**
 * @brief Q15 vector subtraction.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_sub_q15(const __xy q15_t * __restrict src_a, const __xy q15_t * __restrict src_b, __xy q15_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief Q31 vector subtraction.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_sub_q31(const __xy q31_t * __restrict src_a, const __xy q31_t * __restrict src_b, __xy q31_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief Multiplies a floating-point vector by a scalar.
 * @param[in]  src       points to the input vector
 * @param[in]  scale      scale factor to be applied
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_scale_f32(const __xy float32_t * __restrict src, float32_t scale, __xy float32_t * __restrict dst,
				   uint32_t block_size);

/**
 * @brief Multiplies a Q7 vector by a scalar.
 * @param[in]  src        points to the input vector
 * @param[in]  scale_fract  fractional portion of the scale value
 * @param[in]  shift       number of bits to shift the result by
 * @param[out] dst        points to the output vector
 * @param[in]  block_size   number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_scale_q7(const __xy q7_t * __restrict src, q7_t scale_fract, int8_t shift, __xy q7_t * __restrict dst,
				  uint32_t block_size);

/**
 * @brief Multiplies a Q15 vector by a scalar.
 * @param[in]  src        points to the input vector
 * @param[in]  scale_fract  fractional portion of the scale value
 * @param[in]  shift       number of bits to shift the result by
 * @param[out] dst        points to the output vector
 * @param[in]  block_size   number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_scale_q15(const __xy q15_t * __restrict src, q15_t scale_fract, int8_t shift, __xy q15_t * __restrict dst,
				   uint32_t block_size);

/**
 * @brief Multiplies a Q31 vector by a scalar.
 * @param[in]  src        points to the input vector
 * @param[in]  scale_fract  fractional portion of the scale value
 * @param[in]  shift       number of bits to shift the result by
 * @param[out] dst        points to the output vector
 * @param[in]  block_size   number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_scale_q31(const __xy q31_t * __restrict src, q31_t scale_fract, int8_t shift, __xy q31_t * __restrict dst,
				   uint32_t block_size);

/**
 * @brief Q7 vector absolute value.
 * @param[in]  src       points to the input buffer
 * @param[out] dst       points to the output buffer
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_abs_q7(const __xy q7_t * __restrict src, __xy q7_t * __restrict dst, uint32_t block_size);

/**
 * @brief Floating-point vector absolute value.
 * @param[in]  src       points to the input buffer
 * @param[out] dst       points to the output buffer
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_abs_f32(const __xy float32_t * __restrict src, __xy float32_t * __restrict dst, uint32_t block_size);

/**
 * @brief Q15 vector absolute value.
 * @param[in]  src       points to the input buffer
 * @param[out] dst       points to the output buffer
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_abs_q15(const __xy q15_t * __restrict src, __xy q15_t * __restrict dst, uint32_t block_size);

/**
 * @brief Q31 vector absolute value.
 * @param[in]  src       points to the input buffer
 * @param[out] dst       points to the output buffer
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_abs_q31(const __xy q31_t * __restrict src, __xy q31_t * __restrict dst, uint32_t block_size);

/**
 * @brief Dot product of floating-point vectors.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[in]  block_size  number of samples in each vector
 * @param[out] result     output result returned here
 */
DSP_FUNC_SCOPE void zdsp_dot_prod_f32(const __xy float32_t * __restrict src_a, const __xy float32_t * __restrict src_b,
				      uint32_t block_size, float32_t * __restrict result);

/**
 * @brief Dot product of Q7 vectors.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[in]  block_size  number of samples in each vector
 * @param[out] result     output result returned here
 */
DSP_FUNC_SCOPE void zdsp_dot_prod_q7(const __xy q7_t * __restrict src_a, const __xy q7_t * __restrict src_b, uint32_t block_size,
				     q31_t * __restrict result);

/**
 * @brief Dot product of Q15 vectors.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[in]  block_size  number of samples in each vector
 * @param[out] result     output result returned here
 */
DSP_FUNC_SCOPE void zdsp_dot_prod_q15(const __xy q15_t * __restrict src_a, const __xy q15_t * __restrict src_b, uint32_t block_size,
				     q63_t * __restrict result);

/**
 * @brief Dot product of Q31 vectors.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[in]  block_size  number of samples in each vector
 * @param[out] result     output result returned here
 */
DSP_FUNC_SCOPE void zdsp_dot_prod_q31(const __xy q31_t * __restrict src_a, const __xy q31_t * __restrict src_b, uint32_t block_size,
				     q63_t * __restrict result);

/**
 * @brief  Shifts the elements of a Q7 vector a specified number of bits.
 * @param[in]  src       points to the input vector
 * @param[in]  shift_bits  number of bits to shift.  A positive value shifts left; a negative value
 * shifts right.
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_shift_q7(const __xy q7_t * __restrict src, int8_t shift_bits, __xy q7_t * __restrict dst,
				  uint32_t block_size);

/**
 * @brief  Shifts the elements of a Q15 vector a specified number of bits.
 * @param[in]  src       points to the input vector
 * @param[in]  shift_bits  number of bits to shift.  A positive value shifts left; a negative value
 * shifts right.
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_shift_q15(const __xy q15_t * __restrict src, int8_t shift_bits, __xy q15_t * __restrict dst,
				   uint32_t block_size);

/**
 * @brief  Shifts the elements of a Q31 vector a specified number of bits.
 * @param[in]  src       points to the input vector
 * @param[in]  shift_bits  number of bits to shift.  A positive value shifts left; a negative value
 * shifts right.
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_shift_q31(const __xy q31_t * __restrict src, int8_t shift_bits, __xy q31_t * __restrict dst,
				   uint32_t block_size);

/**
 * @brief  Adds a constant offset to a floating-point vector.
 * @param[in]  src       points to the input vector
 * @param[in]  offset     is the offset to be added
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_offset_f32(const __xy float32_t * __restrict src, float32_t offset, __xy float32_t * __restrict dst,
				    uint32_t block_size);

/**
 * @brief  Adds a constant offset to a Q7 vector.
 * @param[in]  src       points to the input vector
 * @param[in]  offset     is the offset to be added
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_offset_q7(const __xy q7_t * __restrict src, q7_t offset, __xy q7_t * __restrict dst, uint32_t block_size);

/**
 * @brief  Adds a constant offset to a Q15 vector.
 * @param[in]  src       points to the input vector
 * @param[in]  offset     is the offset to be added
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_offset_q15(const __xy q15_t * __restrict src, q15_t offset, __xy q15_t * __restrict dst,
				    uint32_t block_size);

/**
 * @brief  Adds a constant offset to a Q31 vector.
 * @param[in]  src       points to the input vector
 * @param[in]  offset     is the offset to be added
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_offset_q31(const __xy q31_t * __restrict src, q31_t offset, __xy q31_t * __restrict dst,
				    uint32_t block_size);

/**
 * @brief  Negates the elements of a floating-point vector.
 * @param[in]  src       points to the input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_negate_f32(const __xy float32_t * __restrict src, __xy float32_t * __restrict dst, uint32_t block_size);

/**
 * @brief  Negates the elements of a Q7 vector.
 * @param[in]  src       points to the input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_negate_q7(const __xy q7_t * __restrict src, __xy q7_t * __restrict dst, uint32_t block_size);

/**
 * @brief  Negates the elements of a Q15 vector.
 * @param[in]  src       points to the input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_negate_q15(const __xy q15_t * __restrict src, __xy q15_t * __restrict dst, uint32_t block_size);

/**
 * @brief  Negates the elements of a Q31 vector.
 * @param[in]  src       points to the input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_negate_q31(const __xy q31_t * __restrict src, __xy q31_t * __restrict dst, uint32_t block_size);

/* dsplib doesn't have following functions*/

/**
 * @brief         Compute the logical bitwise AND of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */

DSP_FUNC_SCOPE void zdsp_and_u16(const __xy uint16_t * __restrict src_a, const __xy uint16_t * __restrict src_b, __xy uint16_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief         Compute the logical bitwise AND of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_and_u32(const __xy uint32_t * __restrict src_a, const __xy uint32_t * __restrict src_b, __xy uint32_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief         Compute the logical bitwise AND of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_and_u8(const __xy uint8_t * __restrict src_a, const __xy uint8_t * __restrict src_b, __xy uint8_t * __restrict dst,
				uint32_t block_size);

/**
 * @brief         Compute the logical bitwise OR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_or_u16(const __xy uint16_t * __restrict src_a, const __xy uint16_t * __restrict src_b, __xy uint16_t * __restrict dst,
				uint32_t block_size);

/**
 * @brief         Compute the logical bitwise OR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_or_u32(const __xy uint32_t * __restrict src_a, const __xy uint32_t * __restrict src_b, __xy uint32_t * __restrict dst,
				uint32_t block_size);

/**
 * @brief         Compute the logical bitwise OR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_or_u8(const __xy uint8_t * __restrict src_a, const __xy uint8_t * __restrict src_b, __xy uint8_t * __restrict dst,
			       uint32_t block_size);

/**
 * @brief         Compute the logical bitwise NOT of a fixed-point vector.
 * @param[in]     src       points to input vector
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_not_u16(const __xy uint16_t * __restrict src, __xy uint16_t * __restrict dst, uint32_t block_size);

/**
 * @brief         Compute the logical bitwise NOT of a fixed-point vector.
 * @param[in]     src       points to input vector
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_not_u32(const __xy uint32_t * __restrict src, __xy uint32_t * __restrict dst, uint32_t block_size);

/**
 * @brief         Compute the logical bitwise NOT of a fixed-point vector.
 * @param[in]     src       points to input vector
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_not_u8(const __xy uint8_t * __restrict src, __xy uint8_t * __restrict dst, uint32_t block_size);

/**
 * @brief         Compute the logical bitwise XOR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_xor_u16(const __xy uint16_t * __restrict src_a, const __xy uint16_t * __restrict src_b, __xy uint16_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief         Compute the logical bitwise XOR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_xor_u32(const __xy uint32_t * __restrict src_a, const __xy uint32_t * __restrict src_b, __xy uint32_t * __restrict dst,
				 uint32_t block_size);

/**
 * @brief         Compute the logical bitwise XOR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_xor_u8(const __xy uint8_t * __restrict src_a, const __xy uint8_t * __restrict src_b, __xy uint8_t * __restrict dst,
				uint32_t block_size);

/**
 * @brief         Elementwise floating-point clipping
 * @param[in]     src          points to input values
 * @param[out]    dst          points to output clipped values
 * @param[in]     low           lower bound
 * @param[in]     high          higher bound
 * @param[in]     num_samples    number of samples to clip
 * @return        none
 */

DSP_FUNC_SCOPE void zdsp_clip_f32(const __xy float32_t * __restrict src, __xy float32_t * __restrict dst, float32_t low,
				  float32_t high, uint32_t num_samples);

/**
 * @brief         Elementwise fixed-point clipping
 * @param[in]     src          points to input values
 * @param[out]    dst          points to output clipped values
 * @param[in]     low           lower bound
 * @param[in]     high          higher bound
 * @param[in]     num_samples    number of samples to clip
 * @return        none
 */

DSP_FUNC_SCOPE void zdsp_clip_q31(const __xy q31_t * __restrict src, __xy q31_t  * __restrict dst, q31_t low, q31_t high,
				  uint32_t num_samples);

/**
 * @brief         Elementwise fixed-point clipping
 * @param[in]     src          points to input values
 * @param[out]    dst          points to output clipped values
 * @param[in]     low           lower bound
 * @param[in]     high          higher bound
 * @param[in]     num_samples    number of samples to clip
 * @return        none
 */

DSP_FUNC_SCOPE void zdsp_clip_q15(const __xy q15_t * __restrict src, __xy q15_t * __restrict dst, q15_t low, q15_t high,
				  uint32_t num_samples);

/**
 * @brief         Elementwise fixed-point clipping
 * @param[in]     src          points to input values
 * @param[out]    dst          points to output clipped values
 * @param[in]     low           lower bound
 * @param[in]     high          higher bound
 * @param[in]     num_samples    number of samples to clip
 * @return        none
 */

DSP_FUNC_SCOPE void zdsp_clip_q7(const __xy q7_t * __restrict src, __xy q7_t * __restrict dst, q7_t low, q7_t high,
				 uint32_t num_samples);
#else

/**
 * @brief Q7 vector multiplication.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_mult_q7(const q7_t *src_a, const q7_t *src_b, q7_t *dst,
				 uint32_t block_size);

/**
 * @brief Q15 vector multiplication.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_mult_q15(const q15_t *src_a, const q15_t *src_b, q15_t *dst,
				  uint32_t block_size);

/**
 * @brief Q31 vector multiplication.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_mult_q31(const q31_t *src_a, const q31_t *src_b, q31_t *dst,
				  uint32_t block_size);

/**
 * @brief Floating-point vector multiplication.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_mult_f32(const float32_t *src_a, const float32_t *src_b, float32_t *dst,
				  uint32_t block_size);

/**
 * @brief Floating-point vector addition.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_add_f32(const float32_t *src_a, const float32_t *src_b, float32_t *dst,
				 uint32_t block_size);

/**
 * @brief Q7 vector addition.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_add_q7(const q7_t *src_a, const q7_t *src_b, q7_t *dst,
				uint32_t block_size);

/**
 * @brief Q15 vector addition.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_add_q15(const q15_t *src_a, const q15_t *src_b, q15_t *dst,
				 uint32_t block_size);

/**
 * @brief Q31 vector addition.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_add_q31(const q31_t *src_a, const q31_t *src_b, q31_t *dst,
				 uint32_t block_size);

/**
 * @brief Floating-point vector subtraction.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_sub_f32(const float32_t *src_a, const float32_t *src_b, float32_t *dst,
				 uint32_t block_size);

/**
 * @brief Q7 vector subtraction.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_sub_q7(const q7_t *src_a, const q7_t *src_b, q7_t *dst,
				uint32_t block_size);

/**
 * @brief Q15 vector subtraction.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_sub_q15(const q15_t *src_a, const q15_t *src_b, q15_t *dst,
				 uint32_t block_size);

/**
 * @brief Q31 vector subtraction.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_sub_q31(const q31_t *src_a, const q31_t *src_b, q31_t *dst,
				 uint32_t block_size);

/**
 * @brief Multiplies a floating-point vector by a scalar.
 * @param[in]  src       points to the input vector
 * @param[in]  scale      scale factor to be applied
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_scale_f32(const float32_t *src, float32_t scale, float32_t *dst,
				   uint32_t block_size);

/**
 * @brief Multiplies a Q7 vector by a scalar.
 * @param[in]  src        points to the input vector
 * @param[in]  scale_fract  fractional portion of the scale value
 * @param[in]  shift       number of bits to shift the result by
 * @param[out] dst        points to the output vector
 * @param[in]  block_size   number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_scale_q7(const q7_t *src, q7_t scale_fract, int8_t shift, q7_t *dst,
				  uint32_t block_size);

/**
 * @brief Multiplies a Q15 vector by a scalar.
 * @param[in]  src        points to the input vector
 * @param[in]  scale_fract  fractional portion of the scale value
 * @param[in]  shift       number of bits to shift the result by
 * @param[out] dst        points to the output vector
 * @param[in]  block_size   number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_scale_q15(const q15_t *src, q15_t scale_fract, int8_t shift, q15_t *dst,
				   uint32_t block_size);

/**
 * @brief Multiplies a Q31 vector by a scalar.
 * @param[in]  src        points to the input vector
 * @param[in]  scale_fract  fractional portion of the scale value
 * @param[in]  shift       number of bits to shift the result by
 * @param[out] dst        points to the output vector
 * @param[in]  block_size   number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_scale_q31(const q31_t *src, q31_t scale_fract, int8_t shift, q31_t *dst,
				   uint32_t block_size);

/**
 * @brief Q7 vector absolute value.
 * @param[in]  src       points to the input buffer
 * @param[out] dst       points to the output buffer
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_abs_q7(const q7_t *src, q7_t *dst, uint32_t block_size);

/**
 * @brief Floating-point vector absolute value.
 * @param[in]  src       points to the input buffer
 * @param[out] dst       points to the output buffer
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_abs_f32(const float32_t *src, float32_t *dst, uint32_t block_size);

/**
 * @brief Q15 vector absolute value.
 * @param[in]  src       points to the input buffer
 * @param[out] dst       points to the output buffer
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_abs_q15(const q15_t *src, q15_t *dst, uint32_t block_size);

/**
 * @brief Q31 vector absolute value.
 * @param[in]  src       points to the input buffer
 * @param[out] dst       points to the output buffer
 * @param[in]  block_size  number of samples in each vector
 */
DSP_FUNC_SCOPE void zdsp_abs_q31(const q31_t *src, q31_t *dst, uint32_t block_size);

/**
 * @brief Dot product of floating-point vectors.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[in]  block_size  number of samples in each vector
 * @param[out] result     output result returned here
 */
DSP_FUNC_SCOPE void zdsp_dot_prod_f32(const float32_t *src_a, const float32_t *src_b,
				      uint32_t block_size, float32_t *result);

/**
 * @brief Dot product of Q7 vectors.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[in]  block_size  number of samples in each vector
 * @param[out] result     output result returned here
 */
DSP_FUNC_SCOPE void zdsp_dot_prod_q7(const q7_t *src_a, const q7_t *src_b, uint32_t block_size,
				     q31_t *result);

/**
 * @brief Dot product of Q15 vectors.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[in]  block_size  number of samples in each vector
 * @param[out] result     output result returned here
 */
DSP_FUNC_SCOPE void zdsp_dot_prod_q15(const q15_t *src_a, const q15_t *src_b, uint32_t block_size,
				      q63_t *result);

/**
 * @brief Dot product of Q31 vectors.
 * @param[in]  src_a      points to the first input vector
 * @param[in]  src_b      points to the second input vector
 * @param[in]  block_size  number of samples in each vector
 * @param[out] result     output result returned here
 */
DSP_FUNC_SCOPE void zdsp_dot_prod_q31(const q31_t *src_a, const q31_t *src_b, uint32_t block_size,
				      q63_t *result);

/**
 * @brief  Shifts the elements of a Q7 vector a specified number of bits.
 * @param[in]  src       points to the input vector
 * @param[in]  shift_bits  number of bits to shift.  A positive value shifts left; a negative value
 * shifts right.
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_shift_q7(const q7_t *src, int8_t shift_bits, q7_t *dst,
				  uint32_t block_size);

/**
 * @brief  Shifts the elements of a Q15 vector a specified number of bits.
 * @param[in]  src       points to the input vector
 * @param[in]  shift_bits  number of bits to shift.  A positive value shifts left; a negative value
 * shifts right.
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_shift_q15(const q15_t *src, int8_t shift_bits, q15_t *dst,
				   uint32_t block_size);

/**
 * @brief  Shifts the elements of a Q31 vector a specified number of bits.
 * @param[in]  src       points to the input vector
 * @param[in]  shift_bits  number of bits to shift.  A positive value shifts left; a negative value
 * shifts right.
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_shift_q31(const q31_t *src, int8_t shift_bits, q31_t *dst,
				   uint32_t block_size);

/**
 * @brief  Adds a constant offset to a floating-point vector.
 * @param[in]  src       points to the input vector
 * @param[in]  offset     is the offset to be added
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_offset_f32(const float32_t *src, float32_t offset, float32_t *dst,
				    uint32_t block_size);

/**
 * @brief  Adds a constant offset to a Q7 vector.
 * @param[in]  src       points to the input vector
 * @param[in]  offset     is the offset to be added
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_offset_q7(const q7_t *src, q7_t offset, q7_t *dst, uint32_t block_size);

/**
 * @brief  Adds a constant offset to a Q15 vector.
 * @param[in]  src       points to the input vector
 * @param[in]  offset     is the offset to be added
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_offset_q15(const q15_t *src, q15_t offset, q15_t *dst,
				    uint32_t block_size);

/**
 * @brief  Adds a constant offset to a Q31 vector.
 * @param[in]  src       points to the input vector
 * @param[in]  offset     is the offset to be added
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_offset_q31(const q31_t *src, q31_t offset, q31_t *dst,
				    uint32_t block_size);

/**
 * @brief  Negates the elements of a floating-point vector.
 * @param[in]  src       points to the input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_negate_f32(const float32_t *src, float32_t *dst, uint32_t block_size);

/**
 * @brief  Negates the elements of a Q7 vector.
 * @param[in]  src       points to the input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_negate_q7(const q7_t *src, q7_t *dst, uint32_t block_size);

/**
 * @brief  Negates the elements of a Q15 vector.
 * @param[in]  src       points to the input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_negate_q15(const q15_t *src, q15_t *dst, uint32_t block_size);

/**
 * @brief  Negates the elements of a Q31 vector.
 * @param[in]  src       points to the input vector
 * @param[out] dst       points to the output vector
 * @param[in]  block_size  number of samples in the vector
 */
DSP_FUNC_SCOPE void zdsp_negate_q31(const q31_t *src, q31_t *dst, uint32_t block_size);

/**
 * @brief         Compute the logical bitwise AND of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_and_u16(const uint16_t *src_a, const uint16_t *src_b, uint16_t *dst,
				 uint32_t block_size);

/**
 * @brief         Compute the logical bitwise AND of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_and_u32(const uint32_t *src_a, const uint32_t *src_b, uint32_t *dst,
				 uint32_t block_size);

/**
 * @brief         Compute the logical bitwise AND of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_and_u8(const uint8_t *src_a, const uint8_t *src_b, uint8_t *dst,
				uint32_t block_size);

/**
 * @brief         Compute the logical bitwise OR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_or_u16(const uint16_t *src_a, const uint16_t *src_b, uint16_t *dst,
				uint32_t block_size);

/**
 * @brief         Compute the logical bitwise OR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_or_u32(const uint32_t *src_a, const uint32_t *src_b, uint32_t *dst,
				uint32_t block_size);

/**
 * @brief         Compute the logical bitwise OR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_or_u8(const uint8_t *src_a, const uint8_t *src_b, uint8_t *dst,
			       uint32_t block_size);

/**
 * @brief         Compute the logical bitwise NOT of a fixed-point vector.
 * @param[in]     src       points to input vector
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_not_u16(const uint16_t *src, uint16_t *dst, uint32_t block_size);

/**
 * @brief         Compute the logical bitwise NOT of a fixed-point vector.
 * @param[in]     src       points to input vector
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_not_u32(const uint32_t *src, uint32_t *dst, uint32_t block_size);

/**
 * @brief         Compute the logical bitwise NOT of a fixed-point vector.
 * @param[in]     src       points to input vector
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_not_u8(const uint8_t *src, uint8_t *dst, uint32_t block_size);

/**
 * @brief         Compute the logical bitwise XOR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_xor_u16(const uint16_t *src_a, const uint16_t *src_b, uint16_t *dst,
				 uint32_t block_size);

/**
 * @brief         Compute the logical bitwise XOR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_xor_u32(const uint32_t *src_a, const uint32_t *src_b, uint32_t *dst,
				 uint32_t block_size);

/**
 * @brief         Compute the logical bitwise XOR of two fixed-point vectors.
 * @param[in]     src_a      points to input vector A
 * @param[in]     src_b      points to input vector B
 * @param[out]    dst       points to output vector
 * @param[in]     block_size  number of samples in each vector
 * @return        none
 */
DSP_FUNC_SCOPE void zdsp_xor_u8(const uint8_t *src_a, const uint8_t *src_b, uint8_t *dst,
				uint32_t block_size);

/**
 * @brief         Elementwise floating-point clipping
 * @param[in]     src          points to input values
 * @param[out]    dst          points to output clipped values
 * @param[in]     low           lower bound
 * @param[in]     high          higher bound
 * @param[in]     num_samples    number of samples to clip
 * @return        none
 */

DSP_FUNC_SCOPE void zdsp_clip_f32(const float32_t *src, float32_t *dst, float32_t low,
				  float32_t high, uint32_t num_samples);

/**
 * @brief         Elementwise fixed-point clipping
 * @param[in]     src          points to input values
 * @param[out]    dst          points to output clipped values
 * @param[in]     low           lower bound
 * @param[in]     high          higher bound
 * @param[in]     num_samples    number of samples to clip
 * @return        none
 */

DSP_FUNC_SCOPE void zdsp_clip_q31(const q31_t *src, q31_t *dst, q31_t low, q31_t high,
				  uint32_t num_samples);

/**
 * @brief         Elementwise fixed-point clipping
 * @param[in]     src          points to input values
 * @param[out]    dst          points to output clipped values
 * @param[in]     low           lower bound
 * @param[in]     high          higher bound
 * @param[in]     num_samples    number of samples to clip
 * @return        none
 */

DSP_FUNC_SCOPE void zdsp_clip_q15(const q15_t *src, q15_t *dst, q15_t low, q15_t high,
				  uint32_t num_samples);

/**
 * @brief         Elementwise fixed-point clipping
 * @param[in]     src          points to input values
 * @param[out]    dst          points to output clipped values
 * @param[in]     low           lower bound
 * @param[in]     high          higher bound
 * @param[in]     num_samples    number of samples to clip
 * @return        none
 */

DSP_FUNC_SCOPE void zdsp_clip_q7(const q7_t *src, q7_t *dst, q7_t low, q7_t high,
				 uint32_t num_samples);
#endif

#ifdef __cplusplus
}
#endif

#ifdef CONFIG_DSP_BACKEND_MWDT_DSPLIB
#include <zdsp_backend/arc_basicmath.h>
#else
#include <zdsp_backend/basicmath.h>
#endif

#endif /* INCLUDE_ZEPHYR_MATH_DSP_BASICMATH_H_ */

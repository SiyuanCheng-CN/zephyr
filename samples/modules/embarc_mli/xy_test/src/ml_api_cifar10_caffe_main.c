/*
 * Copyright (c) 2021 Synopsys
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <zephyr.h>
#include "mli_types.h"

#include "cifar10_ref_inout.h"
#include "cifar10_model.h"
#include "examples_aux.h"
#include "tests_aux.h"

/* size of stack area used by each thread */
#define STACKSIZE 1024

/* scheduling priority used by each thread */
#define PRIORITY 7

#if defined (_ARC) && defined (__GNUC__) && !defined (__CCAC__)
#define ARC_GNU
#endif

#if defined (ARC_GNU)
extern int start_init(void);
#endif 

// Root to referenc IR vectors for comparison
// pass "./ir_idx_12_hwcn_small" for debug
static const char kCifar10RootIR[] = "";
static const char kOutFilePostfix[] = "_out";

const unsigned char kSingleIn[IN_POINTS] = IN_IMG_12;
const float kSingleOutRef[OUT_POINTS] = OUT_PROB_12;

static void cifar10_preprocessing(const void * image_, mli_tensor * net_input_);

char param[3][256]={"dummy_for_check","small_test_base/tests.idx","small_test_base/labels.idx"};// emulation argv for GNU toolchain

void task1(){
    while(1){
        model_run_acc_on_idx_base(param[1], param[2],
                cifar10_cf_net_input, cifar10_cf_net_output,
                cifar10_preprocessing, cifar10_cf_net,
                NULL);
        printf("1111111111111111\n");
        k_msleep(10);
    }
}

void task2(){
    mli_status status = cifar10_cf_init();
    if (status != MLI_STATUS_OK) {
    	printf("Failed to initialize lut for softmax\n");
    }
    while(1){
        model_run_single_in(kSingleIn, kSingleOutRef,
                cifar10_cf_net_input, cifar10_cf_net_output,
                cifar10_preprocessing, cifar10_cf_net,
                kCifar10RootIR);
        printf("2222222222222222\n");
        k_msleep(1000);
    }
}

K_THREAD_DEFINE(task1_id, STACKSIZE, task1, NULL, NULL, NULL,
		PRIORITY, K_FP_REGS | K_DSP_REGS, 0);
K_THREAD_DEFINE(task2_id, STACKSIZE, task2, NULL, NULL, NULL,
		-1, K_FP_REGS | K_DSP_REGS, 0);

//========================================================================================
// Image pre-processing for CIFAR-10 net
//========================================================================================
static void cifar10_preprocessing(const void * image_, mli_tensor * net_input_) {
    const unsigned char * in = image_;
    d_type * const dst = (d_type * const)net_input_->data.mem.D_FIELD;

    // Copying data  to input tensor with subtraction of average.
    // Data shft may be required depending on tensor format
    if (net_input_->el_params.fx.frac_bits == 7 || net_input_->el_type == MLI_EL_SA_8) {
        for (int idx = 0; idx < IN_POINTS; idx++)
            dst[idx] = (d_type)((int)in[idx] - 128);
    } else if (net_input_->el_params.fx.frac_bits > 7) {
        int shift_left = net_input_->el_params.fx.frac_bits - 7;
        for (int idx = 0; idx < IN_POINTS; idx++)
            dst[idx] = (d_type)((int)in[idx] - 128) << shift_left;
    } else {
        int shift_right = 7 - net_input_->el_params.fx.frac_bits;
        for (int idx = 0; idx < IN_POINTS; idx++)
            dst[idx] = (d_type)((int)in[idx] - 128)  >> shift_right; // w/o rounding
    }
}

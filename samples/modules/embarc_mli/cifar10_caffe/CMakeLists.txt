# Copyright (c) 2021 Synopsys
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.13.1)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(hello_world)

zephyr_compile_definitions(
  __FXAPI__=1
)

target_compile_definitions(app PUBLIC V2DSP_XY)
target_compile_definitions(app PUBLIC V2DSP_WIDE)
target_compile_definitions(app PUBLIC V2DSP)

target_sources(app PRIVATE 
    src/ml_api_cifar10_caffe_main.c
    src/cifar10_coefficients_chw_big.c
    src/cifar10_coefficients_chw_small.c
    src/cifar10_constants.h
    src/cifar10_model_chw.c
    src/cifar10_model.h
    src/cifar10_ref_inout.h
)

# Copyright (c) 2022 Synopsys
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(dsp_sharing)

FILE(GLOB app_sources src/*.c)
target_sources(app PRIVATE ${app_sources})

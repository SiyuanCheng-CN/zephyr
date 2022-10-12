# Copyright (c) 2022 Google LLC
# SPDX-License-Identifier: Apache-2.0

target_include_directories(zdsp PUBLIC public_overrides)

zephyr_compile_definitions_ifndef(CONFIG_ARM __GNUC_PYTHON__)

zephyr_include_directories_ifdef(CONFIG_DSP_BACKEND_MWDT_DSPLIB
      ${ARCMWDT_TOOLCHAIN_PATH}/MetaWare/arc/lib/src/dsp/include/
    )

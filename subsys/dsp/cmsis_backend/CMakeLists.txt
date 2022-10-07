# Copyright (c) 2022 Google LLC
# SPDX-License-Identifier: Apache-2.0

target_include_directories(zdsp PUBLIC public_overrides)

zephyr_compile_definitions_ifndef(CONFIG_ARM __GNUC_PYTHON__)

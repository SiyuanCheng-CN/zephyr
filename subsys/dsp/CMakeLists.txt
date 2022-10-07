# Copyright (c) 2022 Google LLC
# SPDX-License-Identifier: Apache-2.0

zephyr_library_named(zdsp)

add_subdirectory_ifdef(CONFIG_DSP_BACKEND_CMSIS cmsis_backend)

zephyr_link_libraries(zdsp)

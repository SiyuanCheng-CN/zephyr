# Copyright (c) 2022 Google LLC
# SPDX-License-Identifier: Apache-2.0

zephyr_library_named(zdsp)

add_subdirectory(cmsis_backend)

zephyr_link_libraries(zdsp)

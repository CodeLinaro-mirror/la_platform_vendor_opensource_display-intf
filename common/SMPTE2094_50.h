// Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
// SPDX-License-Identifier: BSD-3-Clause-Clear

#ifndef __COMMON_SMPTE2094_50_H__
#define __COMMON_SMPTE2094_50_H__

#include <cstdint>

constexpr uint32_t QTI_SMPTE2094_50_METADATA_SIZE_BYTES = 1024 * 42;

/*
 * Dynamic HDR metadata specified by SMPTE ST 2094-50.
 */
typedef struct vendor_qti_hardware_display_common_SMPTE2094_50Metadata {
  /**
   * Actual number of valid bytes in metadataPayload.
   * Must satisfy: size <= QTI_SMPTE2094_50_METADATA_SIZE_BYTES.
   * Consumers MUST validate this before reading metadataPayload.
   */
  uint64_t size;
  uint8_t metadataPayload[QTI_SMPTE2094_50_METADATA_SIZE_BYTES];
} vendor_qti_hardware_display_common_SMPTE2094_50Metadata;

#endif // __COMMON_SMPTE2094_50_H__

// Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
// SPDX-License-Identifier: BSD-3-Clause-Clear

#ifndef __COMMON_DISTORTIONMESH_H__
#define __COMMON_DISTORTIONMESH_H__

#include <cstddef>
#include <cstdint>
#include <vector>

typedef struct vendor_qti_hardware_display_common_DistortionMesh {
  struct XY {
    union {
      float x, u;
    };
    union {
      float y, v;
    };
  };

  std::vector<XY> pos;
  std::vector<XY> tex_r;
  std::vector<XY> tex_g;
  std::vector<XY> tex_b;
  std::vector<uint16_t> indices;

  static const size_t kVertexSize = 4 * sizeof(XY);
  static const size_t kVertexCountSize = sizeof(int32_t);
  static const size_t kIndexSize = sizeof(uint16_t);
  static const size_t kIndexCountSize = sizeof(int32_t);

} vendor_qti_hardware_display_common_DistortionMesh;

#endif // __COMMON_DISTORTIONMESH_H__

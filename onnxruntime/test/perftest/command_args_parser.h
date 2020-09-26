// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include <core/common/common.h>

namespace onnxruntime {
namespace perftest {

struct PerformanceTestConfig;

class CommandLineParser {
 public:
  static void ShowUsage();
  static bool ParseArguments(PerformanceTestConfig& test_config, int argc, ORTCHAR_T* argv[]);
};

}  // namespace perftest
}  // namespace onnxruntime

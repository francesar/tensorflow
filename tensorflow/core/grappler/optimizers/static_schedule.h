/* Copyright 2017 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef THIRD_PARTY_TENSORFLOW_CORE_GRAPPLER_OPTIMIZERS_STATIC_SCHEDULE_H_
#define THIRD_PARTY_TENSORFLOW_CORE_GRAPPLER_OPTIMIZERS_STATIC_SCHEDULE_H_

#include <unordered_map>

#include "tensorflow/core/framework/node_def.pb.h"
#include "tensorflow/core/grappler/clusters/cluster.h"
#include "tensorflow/core/grappler/costs/cost_estimator.h"
#include "tensorflow/core/grappler/grappler_item.h"

namespace tensorflow {
namespace grappler {

// Compute the earliest time as which the execution of each node in the graph
// can complete.
Status EstimateEarliestExecutionTimes(
    const GrapplerItem& item, const Cluster* cluster,
    std::unordered_map<const NodeDef*, Costs::NanoSeconds>* execution_times);

}  // namespace grappler
}  // end namespace tensorflow

#endif  // THIRD_PARTY_TENSORFLOW_CORE_GRAPPLER_OPTIMIZERS_STATIC_SCHEDULE_H_

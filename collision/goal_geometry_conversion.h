/*
 * Copyright 2023 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MOBILITY_COLLISION_COLLISION_GOAL_GEOMETRY_CONVERSION_H_
#define MOBILITY_COLLISION_COLLISION_GOAL_GEOMETRY_CONVERSION_H_

#include "absl/status/status.h"
#include "collision/goal_geometry.pb.h"

namespace mobility::collision {

// forward-declarations
class GoalGeometry;

absl::Status FromProto(const GoalGeometryProto &proto, GoalGeometry *data_out);
absl::Status ToProto(const GoalGeometry &data_in, GoalGeometryProto *proto_out);

}  // namespace mobility::collision

#endif  // MOBILITY_COLLISION_COLLISION_GOAL_GEOMETRY_CONVERSION_H_

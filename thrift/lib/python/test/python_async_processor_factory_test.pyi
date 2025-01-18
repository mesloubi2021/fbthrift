# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# pyre-strict

import unittest

from thrift.python.server import RpcKind

class PythonAsyncProcessorFactoryCTest:
    def __init__(self, unit_test: unittest.TestCase) -> None: ...
    def test_create_method_metadata(
        self,
        function_name: bytes,
        enable_resource_pools_for_python_flag_value: bool,
        rpc_kind: RpcKind,
        expected: bytes,
    ) -> None: ...

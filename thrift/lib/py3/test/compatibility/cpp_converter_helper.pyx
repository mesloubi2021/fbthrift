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

from libcpp.memory cimport shared_ptr
from libcpp.string cimport string
from cython.operator cimport dereference as deref

from convertible.cbindings cimport cSimple, cNested, cUnion
cimport convertible.converter as converter

cdef extern from *:
    """
    template <typename T>
    T echo_thrift(T hrift) noexcept {
        return hrift;
    }

    template <typename T>
    std::shared_ptr<T> corrupt_simple(
            std::shared_ptr<T> hrift,
            const std::string& bad) noexcept {
        *hrift->strField_ref() = bad;
        return hrift;
    }

    """
    cdef T echo_thrift[T](T h_r_i_f_t) noexcept
    cdef shared_ptr[cSimple] corrupt_simple(
        shared_ptr[cSimple] h_r_i_f_t,
        const string& bad
    ) noexcept

def echo_simple(strucc):
    cdef shared_ptr[cSimple] c_strucc = converter.Simple_convert_to_cpp(strucc)
    return converter.Simple_from_cpp(echo_thrift(c_strucc))

def echo_nested(strucc):
    cdef shared_ptr[cNested] c_strucc = converter.Nested_convert_to_cpp(strucc)
    return converter.Nested_from_cpp(echo_thrift(c_strucc))

def echo_union(strucc):
    cdef shared_ptr[cUnion] c_strucc = converter.Union_convert_to_cpp(strucc)
    return converter.Union_from_cpp(echo_thrift(c_strucc))

# This tests constructor error (i.e., invalid C++ -> python)
def echo_simple_corrupted(strucc, bad):
    cdef shared_ptr[cSimple] c_strucc = converter.Simple_convert_to_cpp(strucc)
    return converter.Simple_from_cpp(corrupt_simple(c_strucc, bad))

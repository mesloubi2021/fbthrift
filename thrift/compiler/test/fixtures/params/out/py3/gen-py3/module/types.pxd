#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/params/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.unordered_map cimport unordered_map as cumap
cimport folly.iobuf as _fbthrift_iobuf
from thrift.python.exceptions cimport cTException
from thrift.py3.types cimport (
    bstring,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.python.common cimport cThriftMetadata as __fbthrift_cThriftMetadata
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "thrift/compiler/test/fixtures/params/gen-py3/module/types.h":
  pass







cdef class List__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cint32_t]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[vector[cint32_t]])
    cdef _check_item_type(self, item)

cdef shared_ptr[vector[cint32_t]] List__i32__make_instance(object items) except *

cdef class Map__i32_List__i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,vector[cint32_t]]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[cint32_t,vector[cint32_t]]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[cint32_t,vector[cint32_t]]] Map__i32_List__i32__make_instance(object items) except *

cdef class Set__i32(thrift.py3.types.Set):
    cdef shared_ptr[cset[cint32_t]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cset[cint32_t]])

cdef shared_ptr[cset[cint32_t]] Set__i32__make_instance(object items) except *

cdef class Map__i32_Set__i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,cset[cint32_t]]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[cint32_t,cset[cint32_t]]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[cint32_t,cset[cint32_t]]] Map__i32_Set__i32__make_instance(object items) except *

cdef class Map__i32_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,cint32_t]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[cint32_t,cint32_t]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[cint32_t,cint32_t]] Map__i32_i32__make_instance(object items) except *

cdef class List__Map__i32_i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cmap[cint32_t,cint32_t]]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[vector[cmap[cint32_t,cint32_t]]])
    cdef _check_item_type(self, item)

cdef shared_ptr[vector[cmap[cint32_t,cint32_t]]] List__Map__i32_i32__make_instance(object items) except *

cdef class List__Set__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cset[cint32_t]]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[vector[cset[cint32_t]]])
    cdef _check_item_type(self, item)

cdef shared_ptr[vector[cset[cint32_t]]] List__Set__i32__make_instance(object items) except *

cdef class Map__i32_Map__i32_Set__i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]])
    cdef _check_key_type(self, key)

cdef shared_ptr[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]] Map__i32_Map__i32_Set__i32__make_instance(object items) except *

cdef class List__Map__i32_Map__i32_Set__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]])
    cdef _check_item_type(self, item)

cdef shared_ptr[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]] List__Map__i32_Map__i32_Set__i32__make_instance(object items) except *

cdef class List__List__Map__i32_Map__i32_Set__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]]] _cpp_obj
    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[vector[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]]])
    cdef _check_item_type(self, item)

cdef shared_ptr[vector[vector[cmap[cint32_t,cmap[cint32_t,cset[cint32_t]]]]]] List__List__Map__i32_Map__i32_Set__i32__make_instance(object items) except *



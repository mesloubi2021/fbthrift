#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr

cimport test.fixtures.basic.module.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_ctypes.cMyStruct] MyStruct_convert_to_cpp(object inst)
cdef object MyStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cMyStruct]& c_struct)

cdef shared_ptr[_fbthrift_ctypes.cMyDataItem] MyDataItem_convert_to_cpp(object inst)
cdef object MyDataItem_from_cpp(const shared_ptr[_fbthrift_ctypes.cMyDataItem]& c_struct)

cdef shared_ptr[_fbthrift_ctypes.cMyUnion] MyUnion_convert_to_cpp(object inst)
cdef object MyUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cMyUnion]& c_struct)

cdef shared_ptr[_fbthrift_ctypes.cReservedKeyword] ReservedKeyword_convert_to_cpp(object inst)
cdef object ReservedKeyword_from_cpp(const shared_ptr[_fbthrift_ctypes.cReservedKeyword]& c_struct)

cdef shared_ptr[_fbthrift_ctypes.cUnionToBeRenamed] UnionToBeRenamed_convert_to_cpp(object inst)
cdef object UnionToBeRenamed_from_cpp(const shared_ptr[_fbthrift_ctypes.cUnionToBeRenamed]& c_struct)


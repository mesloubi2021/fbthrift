#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/int_limits/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr

cimport module.cbindings as _fbthrift_cbindings


cdef shared_ptr[_fbthrift_cbindings.cLimits] Limits_convert_to_cpp(object inst) except*
cdef object Limits_from_cpp(const shared_ptr[_fbthrift_cbindings.cLimits]& c_struct)


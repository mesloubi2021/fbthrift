
#
# Autogenerated by Thrift for foo.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport foo.types as _fbthrift_ctypes


cdef shared_ptr[_fbthrift_cbindings.cFields] Fields_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.Fields?>inst)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE

cdef object Fields_from_cpp(const shared_ptr[_fbthrift_cbindings.cFields]& c_struct):
    return _fbthrift_ctypes.Fields._create_FBTHRIFT_ONLY_DO_NOT_USE(c_struct)



#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-stack-arguments/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


cdef extern from "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_handlers.h" namespace "::cpp2":
    cdef cppclass cMyServiceSvIf "::cpp2::MyServiceSvIf":
        pass

cdef extern from "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_handlers.h" namespace "::cpp2":
    cdef cppclass cMyServiceFastSvIf "::cpp2::MyServiceFastSvIf":
        pass

cdef extern from "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_handlers.h" namespace "::cpp2":
    cdef cppclass cDbMixedStackArgumentsSvIf "::cpp2::DbMixedStackArgumentsSvIf":
        pass

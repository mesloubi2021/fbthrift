
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#


cdef extern from "thrift/compiler/test/fixtures/complex-struct/gen-cpp2/module_types.h":
    cdef cppclass cMyStructFloatFieldThrowExp "::cpp2::MyStructFloatFieldThrowExp":
        cMyStructFloatFieldThrowExp()
    cdef cppclass cMyStructMapFloatThrowExp "::cpp2::MyStructMapFloatThrowExp":
        cMyStructMapFloatThrowExp()
    cdef cppclass cMyStruct "::cpp2::MyStruct":
        cMyStruct()
    cdef cppclass cSimpleStruct "::cpp2::SimpleStruct":
        cSimpleStruct()
    cdef cppclass cdefaultStruct "::cpp2::defaultStruct":
        cdefaultStruct()
    cdef cppclass cMyStructTypeDef "::cpp2::MyStructTypeDef":
        cMyStructTypeDef()
    cdef cppclass cMyDataItem "::cpp2::MyDataItem":
        cMyDataItem()
    cdef cppclass cMyUnion "::cpp2::MyUnion":
        cMyUnion()
    cdef cppclass cMyUnionFloatFieldThrowExp "::cpp2::MyUnionFloatFieldThrowExp":
        cMyUnionFloatFieldThrowExp()
    cdef cppclass cComplexNestedStruct "::cpp2::ComplexNestedStruct":
        cComplexNestedStruct()
    cdef cppclass cTypeRemapped "::cpp2::TypeRemapped":
        cTypeRemapped()
    cdef cppclass cemptyXcep "::cpp2::emptyXcep":
        cemptyXcep()
    cdef cppclass creqXcep "::cpp2::reqXcep":
        creqXcep()
    cdef cppclass coptXcep "::cpp2::optXcep":
        coptXcep()
    cdef cppclass ccomplexException "::cpp2::complexException":
        ccomplexException()
    cdef cppclass cContainers "::cpp2::Containers":
        cContainers()

cdef extern from "thrift/compiler/test/fixtures/complex-struct/gen-cpp2/module_types.h":
    cdef cppclass cMyEnum "::cpp2::MyEnum":
        pass
cdef cMyStructFloatFieldThrowExp MyStructFloatFieldThrowExp_convert_to_cpp(object inst) except*
cdef object MyStructFloatFieldThrowExp_from_cpp(const cMyStructFloatFieldThrowExp& c_struct)

cdef cMyStructMapFloatThrowExp MyStructMapFloatThrowExp_convert_to_cpp(object inst) except*
cdef object MyStructMapFloatThrowExp_from_cpp(const cMyStructMapFloatThrowExp& c_struct)

cdef cMyStruct MyStruct_convert_to_cpp(object inst) except*
cdef object MyStruct_from_cpp(const cMyStruct& c_struct)

cdef cSimpleStruct SimpleStruct_convert_to_cpp(object inst) except*
cdef object SimpleStruct_from_cpp(const cSimpleStruct& c_struct)

cdef cdefaultStruct defaultStruct_convert_to_cpp(object inst) except*
cdef object defaultStruct_from_cpp(const cdefaultStruct& c_struct)

cdef cMyStructTypeDef MyStructTypeDef_convert_to_cpp(object inst) except*
cdef object MyStructTypeDef_from_cpp(const cMyStructTypeDef& c_struct)

cdef cMyDataItem MyDataItem_convert_to_cpp(object inst) except*
cdef object MyDataItem_from_cpp(const cMyDataItem& c_struct)

cdef cMyUnion MyUnion_convert_to_cpp(object inst) except*
cdef object MyUnion_from_cpp(const cMyUnion& c_struct)

cdef cMyUnionFloatFieldThrowExp MyUnionFloatFieldThrowExp_convert_to_cpp(object inst) except*
cdef object MyUnionFloatFieldThrowExp_from_cpp(const cMyUnionFloatFieldThrowExp& c_struct)

cdef cComplexNestedStruct ComplexNestedStruct_convert_to_cpp(object inst) except*
cdef object ComplexNestedStruct_from_cpp(const cComplexNestedStruct& c_struct)

cdef cTypeRemapped TypeRemapped_convert_to_cpp(object inst) except*
cdef object TypeRemapped_from_cpp(const cTypeRemapped& c_struct)

cdef cemptyXcep emptyXcep_convert_to_cpp(object inst) except*
cdef object emptyXcep_from_cpp(const cemptyXcep& c_struct)

cdef creqXcep reqXcep_convert_to_cpp(object inst) except*
cdef object reqXcep_from_cpp(const creqXcep& c_struct)

cdef coptXcep optXcep_convert_to_cpp(object inst) except*
cdef object optXcep_from_cpp(const coptXcep& c_struct)

cdef ccomplexException complexException_convert_to_cpp(object inst) except*
cdef object complexException_from_cpp(const ccomplexException& c_struct)

cdef cContainers Containers_convert_to_cpp(object inst) except*
cdef object Containers_from_cpp(const cContainers& c_struct)


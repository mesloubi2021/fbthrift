
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT
 *  @generated
 *
 */

#pragma once

#include <thrift/lib/python/capi/constructor.h>
#include <thrift/lib/python/capi/extractor.h>

#include <thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h>

namespace apache {
namespace thrift {
namespace python {
namespace capi {
template <>
struct Extractor<::test::fixtures::basic::MyStruct>
    : public BaseExtractor<::test::fixtures::basic::MyStruct> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::basic::MyStruct> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyStruct>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyStruct>> {
  ExtractorResult<::test::fixtures::basic::MyStruct> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::MyStruct>
    : public BaseConstructor<::test::fixtures::basic::MyStruct> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::basic::MyStruct& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyStruct>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyStruct>> {
  PyObject* operator()(const ::test::fixtures::basic::MyStruct& val);
};

template <>
struct Extractor<::test::fixtures::basic::Containers>
    : public BaseExtractor<::test::fixtures::basic::Containers> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::basic::Containers> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::Containers>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::Containers>> {
  ExtractorResult<::test::fixtures::basic::Containers> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::Containers>
    : public BaseConstructor<::test::fixtures::basic::Containers> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::basic::Containers& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::Containers>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::Containers>> {
  PyObject* operator()(const ::test::fixtures::basic::Containers& val);
};

template <>
struct Extractor<::test::fixtures::basic::MyDataItem>
    : public BaseExtractor<::test::fixtures::basic::MyDataItem> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::basic::MyDataItem> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyDataItem>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyDataItem>> {
  ExtractorResult<::test::fixtures::basic::MyDataItem> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::MyDataItem>
    : public BaseConstructor<::test::fixtures::basic::MyDataItem> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::basic::MyDataItem& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyDataItem>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyDataItem>> {
  PyObject* operator()(const ::test::fixtures::basic::MyDataItem& val);
};

template <>
struct Extractor<::test::fixtures::basic::MyUnion>
    : public BaseExtractor<::test::fixtures::basic::MyUnion> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::basic::MyUnion> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyUnion>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyUnion>> {
  ExtractorResult<::test::fixtures::basic::MyUnion> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::MyUnion>
    : public BaseConstructor<::test::fixtures::basic::MyUnion> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::basic::MyUnion& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyUnion>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyUnion>> {
  PyObject* operator()(const ::test::fixtures::basic::MyUnion& val);
};

template <>
struct Extractor<::test::fixtures::basic::MyException>
    : public BaseExtractor<::test::fixtures::basic::MyException> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::basic::MyException> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyException>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyException>> {
  ExtractorResult<::test::fixtures::basic::MyException> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::MyException>
    : public BaseConstructor<::test::fixtures::basic::MyException> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::basic::MyException& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyException>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyException>> {
  PyObject* operator()(const ::test::fixtures::basic::MyException& val);
};

template <>
struct Extractor<::test::fixtures::basic::MyExceptionWithMessage>
    : public BaseExtractor<::test::fixtures::basic::MyExceptionWithMessage> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::basic::MyExceptionWithMessage> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyExceptionWithMessage>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyExceptionWithMessage>> {
  ExtractorResult<::test::fixtures::basic::MyExceptionWithMessage> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::MyExceptionWithMessage>
    : public BaseConstructor<::test::fixtures::basic::MyExceptionWithMessage> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::basic::MyExceptionWithMessage& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyExceptionWithMessage>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::MyExceptionWithMessage>> {
  PyObject* operator()(const ::test::fixtures::basic::MyExceptionWithMessage& val);
};

template <>
struct Extractor<::test::fixtures::basic::ReservedKeyword>
    : public BaseExtractor<::test::fixtures::basic::ReservedKeyword> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::basic::ReservedKeyword> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::ReservedKeyword>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::ReservedKeyword>> {
  ExtractorResult<::test::fixtures::basic::ReservedKeyword> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::ReservedKeyword>
    : public BaseConstructor<::test::fixtures::basic::ReservedKeyword> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::basic::ReservedKeyword& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::ReservedKeyword>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::ReservedKeyword>> {
  PyObject* operator()(const ::test::fixtures::basic::ReservedKeyword& val);
};

template <>
struct Extractor<::test::fixtures::basic::UnionToBeRenamed>
    : public BaseExtractor<::test::fixtures::basic::UnionToBeRenamed> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::test::fixtures::basic::UnionToBeRenamed> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::UnionToBeRenamed>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::UnionToBeRenamed>> {
  ExtractorResult<::test::fixtures::basic::UnionToBeRenamed> operator()(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::UnionToBeRenamed>
    : public BaseConstructor<::test::fixtures::basic::UnionToBeRenamed> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::test::fixtures::basic::UnionToBeRenamed& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::UnionToBeRenamed>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::fixtures::basic::UnionToBeRenamed>> {
  PyObject* operator()(const ::test::fixtures::basic::UnionToBeRenamed& val);
};

template <>
struct Extractor<::test::fixtures::basic::MyEnum>
    : public BaseExtractor<::test::fixtures::basic::MyEnum> {
  ExtractorResult<::test::fixtures::basic::MyEnum> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::MyEnum> {
  PyObject* operator()(::test::fixtures::basic::MyEnum val);
};

template <>
struct Extractor<::test::fixtures::basic::HackEnum>
    : public BaseExtractor<::test::fixtures::basic::HackEnum> {
  ExtractorResult<::test::fixtures::basic::HackEnum> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Constructor<::test::fixtures::basic::HackEnum> {
  PyObject* operator()(::test::fixtures::basic::HackEnum val);
};

} // namespace capi
} // namespace python
} // namespace thrift
} // namespace apache

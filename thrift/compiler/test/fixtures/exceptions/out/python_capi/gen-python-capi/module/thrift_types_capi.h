
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

#include <thrift/compiler/test/fixtures/exceptions/gen-cpp2/module_types.h>

namespace apache {
namespace thrift {
namespace python {
namespace capi {
template <>
struct Extractor<::cpp2::Fiery>
    : public BaseExtractor<::cpp2::Fiery> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::Fiery> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Fiery>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Fiery>> {
  ExtractorResult<::cpp2::Fiery> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::Fiery>
    : public BaseConstructor<::cpp2::Fiery> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::Fiery& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Fiery>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Fiery>> {
  PyObject* operator()(const ::cpp2::Fiery& val);
};

template <>
struct Extractor<::cpp2::Serious>
    : public BaseExtractor<::cpp2::Serious> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::Serious> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Serious>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Serious>> {
  ExtractorResult<::cpp2::Serious> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::Serious>
    : public BaseConstructor<::cpp2::Serious> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::Serious& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Serious>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Serious>> {
  PyObject* operator()(const ::cpp2::Serious& val);
};

template <>
struct Extractor<::cpp2::ComplexFieldNames>
    : public BaseExtractor<::cpp2::ComplexFieldNames> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::ComplexFieldNames> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ComplexFieldNames>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ComplexFieldNames>> {
  ExtractorResult<::cpp2::ComplexFieldNames> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::ComplexFieldNames>
    : public BaseConstructor<::cpp2::ComplexFieldNames> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::ComplexFieldNames& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ComplexFieldNames>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ComplexFieldNames>> {
  PyObject* operator()(const ::cpp2::ComplexFieldNames& val);
};

template <>
struct Extractor<::cpp2::CustomFieldNames>
    : public BaseExtractor<::cpp2::CustomFieldNames> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::CustomFieldNames> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::CustomFieldNames>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::CustomFieldNames>> {
  ExtractorResult<::cpp2::CustomFieldNames> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::CustomFieldNames>
    : public BaseConstructor<::cpp2::CustomFieldNames> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::CustomFieldNames& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::CustomFieldNames>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::CustomFieldNames>> {
  PyObject* operator()(const ::cpp2::CustomFieldNames& val);
};

template <>
struct Extractor<::cpp2::ExceptionWithPrimitiveField>
    : public BaseExtractor<::cpp2::ExceptionWithPrimitiveField> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::ExceptionWithPrimitiveField> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ExceptionWithPrimitiveField>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ExceptionWithPrimitiveField>> {
  ExtractorResult<::cpp2::ExceptionWithPrimitiveField> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::ExceptionWithPrimitiveField>
    : public BaseConstructor<::cpp2::ExceptionWithPrimitiveField> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::ExceptionWithPrimitiveField& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ExceptionWithPrimitiveField>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ExceptionWithPrimitiveField>> {
  PyObject* operator()(const ::cpp2::ExceptionWithPrimitiveField& val);
};

template <>
struct Extractor<::cpp2::ExceptionWithStructuredAnnotation>
    : public BaseExtractor<::cpp2::ExceptionWithStructuredAnnotation> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::ExceptionWithStructuredAnnotation> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ExceptionWithStructuredAnnotation>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ExceptionWithStructuredAnnotation>> {
  ExtractorResult<::cpp2::ExceptionWithStructuredAnnotation> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::ExceptionWithStructuredAnnotation>
    : public BaseConstructor<::cpp2::ExceptionWithStructuredAnnotation> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::ExceptionWithStructuredAnnotation& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ExceptionWithStructuredAnnotation>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::ExceptionWithStructuredAnnotation>> {
  PyObject* operator()(const ::cpp2::ExceptionWithStructuredAnnotation& val);
};

template <>
struct Extractor<::cpp2::Banal>
    : public BaseExtractor<::cpp2::Banal> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::Banal> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Banal>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Banal>> {
  ExtractorResult<::cpp2::Banal> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::Banal>
    : public BaseConstructor<::cpp2::Banal> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::Banal& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Banal>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::Banal>> {
  PyObject* operator()(const ::cpp2::Banal& val);
};

} // namespace capi
} // namespace python
} // namespace thrift
} // namespace apache

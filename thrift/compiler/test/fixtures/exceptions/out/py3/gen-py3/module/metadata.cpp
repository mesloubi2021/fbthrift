/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/exceptions/gen-py3/module/metadata.h"

namespace cpp2 {
::apache::thrift::metadata::ThriftMetadata module_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::ExceptionMetadata<Fiery>::gen(metadata);
  ::apache::thrift::detail::md::ExceptionMetadata<Serious>::gen(metadata);
  ::apache::thrift::detail::md::ExceptionMetadata<ComplexFieldNames>::gen(metadata);
  ::apache::thrift::detail::md::ExceptionMetadata<CustomFieldNames>::gen(metadata);
  ::apache::thrift::detail::md::ExceptionMetadata<ExceptionWithPrimitiveField>::gen(metadata);
  ::apache::thrift::detail::md::ExceptionMetadata<ExceptionWithStructuredAnnotation>::gen(metadata);
  ::apache::thrift::detail::md::ExceptionMetadata<Banal>::gen(metadata);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::Raiser>>::gen(response);
  return metadata;
}
} // namespace cpp2

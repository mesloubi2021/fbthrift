/**
 * Autogenerated by Thrift for thrift/annotation/scope.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-py3/scope/metadata.h"

namespace facebook {
namespace thrift {
namespace annotation {
::apache::thrift::metadata::ThriftMetadata scope_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::StructMetadata<Transitive>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Program>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Struct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Union>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Exception>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Field>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Typedef>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Service>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Interaction>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Function>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<EnumValue>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Const>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Structured>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Interface>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<RootDefinition>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Definition>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<DisableSchemaConst>::gen(metadata);
  return metadata;
}
} // namespace facebook
} // namespace thrift
} // namespace annotation

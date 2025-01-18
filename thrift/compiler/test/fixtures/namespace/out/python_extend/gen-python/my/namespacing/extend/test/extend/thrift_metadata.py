#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import apache.thrift.metadata.thrift_types as _fbthrift_metadata

import python_module_root.my.namespacing.extend.test.extend.thrift_enums as _fbthrift_current_module_enums
import python_module_root.my.namespacing.extend.test.extend.thrift_enums


import python_module_root.my.namespacing.test.hsmodule.thrift_enums
import python_module_root.my.namespacing.test.hsmodule.thrift_metadata


def gen_metadata_service_ExtendTestService() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_service_ExtendTestService(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def _fbthrift_gen_metadata_service_ExtendTestService(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "extend.ExtendTestService"
    
    if qualified_name in metadata_struct.services:
        return metadata_struct
    
    functions = [
        _fbthrift_metadata.ThriftFunction(name="check", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BOOL_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="hsmodule.HsFoo")), name="struct1", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
    ]
    
    service_dict = dict(metadata_struct.services)
    service_dict[qualified_name] = _fbthrift_metadata.ThriftService(name=qualified_name, functions=functions, parent="hsmodule.HsTestService", structured_annotations=[
    ])
    new_struct = metadata_struct(services=service_dict)
    new_struct = python_module_root.my.namespacing.test.hsmodule.thrift_metadata._fbthrift_gen_metadata_service_HsTestService(new_struct)
    
    new_struct = python_module_root.my.namespacing.test.hsmodule.thrift_metadata._fbthrift_gen_metadata_struct_HsFoo(new_struct) # struct1
    
    
     # return value
    
    
    return new_struct

def _fbthrift_metadata_service_response_ExtendTestService() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
    metadata = gen_metadata_service_ExtendTestService()
    context = _fbthrift_metadata.ThriftServiceContext(service_info=metadata.services["extend.ExtendTestService"], module=_fbthrift_metadata.ThriftModuleContext(name="extend"))
    services = [_fbthrift_metadata.ThriftServiceContextRef(module=_fbthrift_metadata.ThriftModuleContext(name=name.split('.')[0]), service_name=name) for name in metadata.services]
    return _fbthrift_metadata.ThriftServiceMetadataResponse(metadata=metadata,context=context,services=services)



def getThriftModuleMetadata() -> _fbthrift_metadata.ThriftMetadata:
    meta = _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    meta = _fbthrift_gen_metadata_service_ExtendTestService(meta)
    return meta

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

from abc import ABCMeta
import typing as _typing

import folly.iobuf as _fbthrift_iobuf

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers
from thrift.python.mutable_serializer import serialize_iobuf, deserialize, Protocol
from thrift.python.server import ServiceInterface, RpcKind, PythonUserException

import python_module_root.my.namespacing.extend.test.extend.thrift_mutable_types as python_module_root__my__namespacing__extend__test__extend__thrift_mutable_types
import python_module_root.my.namespacing.extend.test.extend.thrift_metadata
import python_module_root.my.namespacing.test.hsmodule.thrift_services
import python_module_root.my.namespacing.test.hsmodule.thrift_mutable_types as python_module_root__my__namespacing__test__hsmodule__thrift_mutable_types

class ExtendTestServiceInterface(
    python_module_root.my.namespacing.test.hsmodule.thrift_services.HsTestServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"ExtendTestService"

    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., object]]:
        functionTable = {
            b"check": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_check),
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "extend.ExtendTestService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return python_module_root.my.namespacing.extend.test.extend.thrift_metadata.gen_metadata_service_ExtendTestService()

    @staticmethod
    def __get_metadata_service_response__() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
        return python_module_root.my.namespacing.extend.test.extend.thrift_metadata._fbthrift_metadata_service_response_ExtendTestService()



    async def check(
            self,
            struct1: python_module_root__my__namespacing__test__hsmodule__thrift_mutable_types.HsFoo
        ) -> bool:
        raise NotImplementedError("async def check is not implemented")

    async def _fbthrift__handler_check(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(python_module_root__my__namespacing__extend__test__extend__thrift_mutable_types._fbthrift_ExtendTestService_check_args, args, protocol)
        value = await self.check(args_struct.struct1,)
        return_struct = python_module_root__my__namespacing__extend__test__extend__thrift_mutable_types._fbthrift_ExtendTestService_check_result(success=value)
        return serialize_iobuf(return_struct, protocol)


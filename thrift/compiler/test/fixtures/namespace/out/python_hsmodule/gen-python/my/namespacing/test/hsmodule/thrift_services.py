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
from thrift.python.serializer import serialize_iobuf, deserialize, Protocol
from thrift.python.server import ServiceInterface, RpcKind, PythonUserException

import python_module_root.my.namespacing.test.hsmodule.thrift_types as python_module_root__my__namespacing__test__hsmodule__thrift_types
import python_module_root.my.namespacing.test.hsmodule.thrift_metadata

class HsTestServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"HsTestService"

    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., object]]:
        functionTable = {
            b"init": (RpcKind.SINGLE_REQUEST_SINGLE_RESPONSE, self._fbthrift__handler_init),
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "hsmodule.HsTestService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return python_module_root.my.namespacing.test.hsmodule.thrift_metadata.gen_metadata_service_HsTestService()

    @staticmethod
    def __get_metadata_service_response__() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
        return python_module_root.my.namespacing.test.hsmodule.thrift_metadata._fbthrift_metadata_service_response_HsTestService()



    async def init(
            self,
            int1: int
        ) -> int:
        raise NotImplementedError("async def init is not implemented")

    async def _fbthrift__handler_init(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(python_module_root__my__namespacing__test__hsmodule__thrift_types._fbthrift_HsTestService_init_args, args, protocol)
        value = await self.init(args_struct.int1,)
        return_struct = python_module_root__my__namespacing__test__hsmodule__thrift_types._fbthrift_HsTestService_init_result(success=value)
        return serialize_iobuf(return_struct, protocol)


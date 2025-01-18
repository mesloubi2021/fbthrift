#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import test.namespace_from_package.module.thrift_abstract_types as _fbthrift_python_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers


class _fbthrift_compatible_with_Foo:
    pass


class Foo(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_Foo, _fbthrift_python_abstract_types.Foo):
    @property
    def MyInt(self) -> int: ...
    @MyInt.setter
    def MyInt(self, value: int) -> None: ...

    def __init__(
        self, *,
        MyInt: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        MyInt: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    def _to_python(self) -> "test.namespace_from_package.module.thrift_types.Foo": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.namespace_from_package.module.types.Foo": ...  # type: ignore
    def _to_py_deprecated(self) -> "namespace_from_package.module.ttypes.Foo": ...  # type: ignore
_fbthrift_Foo = Foo


class _fbthrift_TestService_init_args(_fbthrift_python_mutable_types.MutableStruct):
    int1: _typing.Final[int] = ...

    def __init__(
        self, *,
        int1: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_TestService_init_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[int]

    def __init__(
        self, *, success: _typing.Optional[int] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            int,
        ]]]: ...

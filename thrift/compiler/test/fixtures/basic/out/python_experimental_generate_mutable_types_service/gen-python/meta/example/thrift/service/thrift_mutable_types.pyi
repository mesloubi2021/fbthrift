#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_mutable_types` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions


class _fbthrift_compatible_with_EchoRequest:
    pass


class EchoRequest(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_EchoRequest):
    text: str = ...
    def __init__(
        self, *,
        text: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        text: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "meta.example.thrift.service.types.EchoRequest": ...  # type: ignore
    def _to_py_deprecated(self) -> "service.ttypes.EchoRequest": ...  # type: ignore


class _fbthrift_compatible_with_EchoResponse:
    pass


class EchoResponse(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_EchoResponse):
    text: str = ...
    def __init__(
        self, *,
        text: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        text: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "meta.example.thrift.service.types.EchoResponse": ...  # type: ignore
    def _to_py_deprecated(self) -> "service.ttypes.EchoResponse": ...  # type: ignore


class _fbthrift_compatible_with_WhisperException:
    pass


class WhisperException(_fbthrift_python_mutable_exceptions.MutableGeneratedError, _fbthrift_compatible_with_WhisperException):
    message: str = ...
    def __init__(
        self, *,
        message: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "meta.example.thrift.service.types.WhisperException": ...  # type: ignore
    def _to_py_deprecated(self) -> "service.ttypes.WhisperException": ...  # type: ignore


class _fbthrift_EchoService_echo_args(_fbthrift_python_types.Struct):
    request: _typing.Final[EchoRequest] = ...

    def __init__(
        self, *,
        request: _typing.Optional[EchoRequest]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, EchoRequest]]]: ...


class _fbthrift_EchoService_echo_result(_fbthrift_python_types.Struct):
    success: _typing.Final[EchoResponse]
    ex: _typing.Final[WhisperException]

    def __init__(
        self, *, success: _typing.Optional[EchoResponse] = ..., ex: _typing.Optional[WhisperException]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            EchoResponse,
            WhisperException,
        ]]]: ...

#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/transitive-deps/src/s.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from thrift.py3.reflection import (
  ArgumentSpec as __ArgumentSpec,
  InterfaceSpec as __InterfaceSpec,
  MethodSpec as __MethodSpec,
  NumberType as __NumberType,
)

import folly.iobuf as _fbthrift_iobuf

import b.types as _b_types
import c.types as _c_types

import s.types as _s_types


def get_reflection__TestService(for_clients: bool):
    spec: __InterfaceSpec = __InterfaceSpec(
        name="TestService",
        methods=None,
        annotations={
        },
    )
    spec.add_method(
        __MethodSpec.__new__(
            __MethodSpec,
            name="test",
            arguments=(
            ),
            result=None,
            result_kind=__NumberType.NOT_A_NUMBER,
            exceptions=(
                _c_types.E,
            ),
            annotations={
            },
        )
    )
    return spec

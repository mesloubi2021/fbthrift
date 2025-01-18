# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# pyre-strict

import argparse
import doctest
import os
import sys
from enum import Enum
from typing import Dict, Iterable, List, Optional, TextIO


class Target(Enum):
    NAME = 0
    THRIFT = 1
    CPP2 = 2


THRIFT_HEADER = f"""# Copyright (c) Meta Platforms, Inc. and affiliates.
# This file was generated by `thrift/test/testset/generator.py`
# {'@'}generated

include "thrift/annotation/cpp.thrift"
include "thrift/annotation/hack.thrift"
include "thrift/annotation/java.thrift"
include "thrift/annotation/python.thrift"
include "thrift/annotation/thrift.thrift"

cpp_include "thrift/test/AdapterTest.h"

@thrift.Experimental
package "facebook.com/thrift/test/testset"

namespace cpp2 apache.thrift.test.testset
namespace py3 thrift.test
namespace php apache_thrift
namespace py thrift.test.testset
namespace py.asyncio thrift_asyncio.test.testset
namespace java.swift org.apache.thrift.test
namespace go thrift.test.testset
"""

CPP2_HEADER = f"""// Copyright (c) Meta Platforms, Inc. and affiliates.
// This file was generated by `thrift/test/testset/generator.py`
// {'@'}generated

#pragma once

#include <fatal/type/sequence.h>
#include <fatal/type/sort.h>
#include <thrift/lib/cpp2/type/ThriftType.h>
#include <thrift/test/testset/gen-cpp2/testset_types.h>

namespace apache::thrift::test::testset {{

enum class FieldModifier {{
  Optional = 1,
  Required,
  Terse,
  Reference,
  SharedReference,
  Lazy,
  Box,
  CustomDefault,
  AlternativeCustomDefault,
  Adapter,
  FieldAdapter,
  OpEncode,
}};

namespace detail {{

template <FieldModifier... Ms>
using mod_set = fatal::sort<fatal::sequence<FieldModifier, Ms...>>;

template <typename T, typename Ms>
struct struct_ByFieldType;

template <typename T, typename Ms>
struct exception_ByFieldType;

template <typename T, typename Ms>
struct union_ByFieldType;
"""

CPP2_FOOTER = """
} // namespace detail

template <typename T, FieldModifier... Ms>
using struct_with = typename detail::struct_ByFieldType<T, detail::mod_set<Ms...>>::type;

template <typename T, FieldModifier... Ms>
using exception_with = typename detail::exception_ByFieldType<T, detail::mod_set<Ms...>>::type;

template <typename T, FieldModifier... Ms>
using union_with = typename detail::union_ByFieldType<T, detail::mod_set<Ms...>>::type;

} // namespace apache::thrift::test::testset
"""

PRIMITIVE_TYPES = (
    "bool",
    "byte",
    "i16",
    "i32",
    "i64",
    "float",
    "double",
    "binary",
    "string",
)

PRIMITIVE_TYPES_WITH_CUSTOM_DEFAULT = (
    "bool{true}",
    "byte{1}",
    "i16{2}",
    "i32{3}",
    "i64{4}",
    "float{5}",
    "double{6}",
    'binary{"7"}',
    'string{"8"}',
)

PRIMITIVE_TYPES_WITH_ALTERNATIVE_CUSTOM_DEFAULT = (
    "bool{true}",
    "byte{10}",
    "i16{20}",
    "i32{30}",
    "i64{40}",
    "float{50}",
    "double{60}",
    'binary{"70"}',
    'string{"80"}',
)

KEY_TYPES = (
    "string",
    "i64",
)

CPP2_TYPE_NS = "type"

HACK_TYPE_ADAPTER = "|@hack.Adapter{{name = 'ConformanceTestAdapter_{}'}}"
OTHER_TYPE_ADAPTERS = (
    "|@cpp.Adapter{{name = '::apache::thrift::test::TemplatedTestAdapter'}}"
    "|@java.Adapter{{adapterClassName = 'com.facebook.thrift.adapter.test.GenericTypeAdapter', typeClassName = 'com.facebook.thrift.adapter.test.Wrapped'}}"
    "|@python.Adapter{{name = 'thrift.python.test.adapters.noop.Wrapper', typeHint = 'thrift.python.test.adapters.noop.Wrapped[]',}}"
)
TYPE_ADAPTERS: str = OTHER_TYPE_ADAPTERS + HACK_TYPE_ADAPTER

FIELD_ADAPTERS = (
    "|@cpp.Adapter{{name = '::apache::thrift::test::TemplatedTestFieldAdapter'}}"
    "|@java.Wrapper{{wrapperClassName = 'com.facebook.thrift.adapter.test.GenericWrapper', typeClassName = 'com.facebook.thrift.adapter.test.Wrapped'}}"
    "|@python.Adapter{{name = 'thrift.python.test.adapters.noop.FieldWrapper', typeHint = 'thrift.python.test.adapters.noop.Wrapped[]',}}"
    "|@hack.Wrapper{{name = '\\ConformanceTestFieldWrapper'}}"
)

PRIMATIVE_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "{}",
    Target.THRIFT: "{}",
    Target.CPP2: CPP2_TYPE_NS + "::{}_t",
}

PRIMATIVE_CUSTOM_DEFAULT_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "{}_custom_default",
    Target.THRIFT: "{}",
    Target.CPP2: CPP2_TYPE_NS + "::{}_t|FieldModifier::CustomDefault",
}

PRIMATIVE_ALTERNATIVE_CUSTOM_DEFAULT_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "{}_alternative_custom_default",
    Target.THRIFT: "{}",
    Target.CPP2: CPP2_TYPE_NS + "::{}_t|FieldModifier::AlternativeCustomDefault",
}

STRUCT_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "struct_{}",
    Target.THRIFT: "struct {}",
    Target.CPP2: CPP2_TYPE_NS + "::struct_t<{}>",
}

UNION_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "union_{}",
    Target.THRIFT: "union {}",
    Target.CPP2: CPP2_TYPE_NS + "::union_t<{}>",
}

EXCEPTION_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "exception_{}",
    Target.THRIFT: "exception {}",
    Target.CPP2: CPP2_TYPE_NS + "::exception_t<{}>",
}

OP_ENCODED_STRUCT_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "struct_{}_op_encoded",
    Target.THRIFT: "@cpp.UseOpEncode\nstruct {}",
    Target.CPP2: CPP2_TYPE_NS + "::struct_t<{}>|FieldModifier::OpEncode",
}

OP_ENCODED_UNION_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "union_{}_op_encoded",
    Target.THRIFT: "@cpp.UseOpEncode\nunion {}",
    Target.CPP2: CPP2_TYPE_NS + "::union_t<{}>|FieldModifier::OpEncode",
}

OP_ENCODED_EXCEPTION_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "exception_{}_op_encoded",
    Target.THRIFT: "@cpp.UseOpEncode\nexception {}",
    Target.CPP2: CPP2_TYPE_NS + "::exception_t<{}>|FieldModifier::OpEncode",
}

LIST_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "list_{}",
    Target.THRIFT: "list<{}>",
    Target.CPP2: CPP2_TYPE_NS + "::list<{}>",
}

SET_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "set_{}",
    Target.THRIFT: "set<{}>",
    Target.CPP2: CPP2_TYPE_NS + "::set<{}>",
}

MAP_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "map_{}_{}",
    Target.THRIFT: "map<{}, {}>",
    Target.CPP2: CPP2_TYPE_NS + "::map<{}, {}>",
}

OPTIONAL_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "optional_{}",
    Target.THRIFT: "optional {}",
    Target.CPP2: "{}|FieldModifier::Optional",
}

REQUIRED_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "required_{}",
    Target.THRIFT: "required {}",
    Target.CPP2: "{}|FieldModifier::Required",
}

TERSE_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "terse_{}",
    Target.THRIFT: "{}|@thrift.TerseWrite",
    Target.CPP2: "{}|FieldModifier::Terse",
}

CPP_REF_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "{}_cpp_ref",
    Target.THRIFT: "{}|@cpp.Ref{{type = cpp.RefType.Unique}}|@cpp.AllowLegacyNonOptionalRef",
    Target.CPP2: "{}|FieldModifier::Reference",
}

SHARED_CPP_REF_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "{}_shared_cpp_ref",
    Target.THRIFT: "{}|@cpp.Ref{{type = cpp.RefType.SharedMutable}}|@cpp.AllowLegacyNonOptionalRef",
    Target.CPP2: "{}|FieldModifier::SharedReference",
}

LAZY_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "{}_lazy",
    Target.THRIFT: "{}|@cpp.Lazy",
    Target.CPP2: "{}|FieldModifier::Lazy",
}

BOX_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "{}_box",
    Target.THRIFT: "{}|@thrift.Box",
    Target.CPP2: "{}|FieldModifier::Box",
}

ADAPTER_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "adapted_{}",
    Target.THRIFT: "{}" + TYPE_ADAPTERS,
    Target.CPP2: "{}|FieldModifier::Adapter",
}

NON_HACK_ADAPTER_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "adapted_{}",
    Target.THRIFT: "{}" + OTHER_TYPE_ADAPTERS,
    Target.CPP2: "{}|FieldModifier::Adapter",
}

FIELD_ADAPTER_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "field_adapted_{}",
    Target.THRIFT: "{}" + FIELD_ADAPTERS,
    Target.CPP2: "{}|FieldModifier::FieldAdapter",
}

ADAPTED_TYPEDEF_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "adapted_typedef_{}",
    Target.THRIFT: "typedef {} {}" + TYPE_ADAPTERS,
    Target.CPP2: "{}",
}

TYPEDEF_STRUCT_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "struct_{}",
    Target.THRIFT: "@cpp.UseOpEncode\nstruct {}",
    Target.CPP2: CPP2_TYPE_NS + "::struct_t<{}>",
}

HACK_NONCONFORMING_TRANSFORM: Dict[Target, str] = {
    Target.NAME: "{}",
    Target.THRIFT: "{}|@hack.SkipCodegen{{reason = 'Invalid key type'}}",
    Target.CPP2: "{}",
}


def has_custom_default(s: str) -> bool:
    """Whether field_type has {}
    >>> has_custom_default("no_custom_default|thrift.box")
    False
    >>> has_custom_default("i32{42}|thrift.box")
    True
    """
    return s.find("{") != -1 and s.find("}") != -1


def remove_custom_default(s: str) -> str:
    """Remove custom default inside {}
    >>> remove_custom_default("no_custom_default|thrift.box")
    'no_custom_default|thrift.box'
    >>> remove_custom_default("i32{42}|thrift.box")
    'i32|thrift.box'
    """
    if not has_custom_default(s):
        return s
    return s[: s.find("{")] + s[s.find("}") + 1 :]


def get_custom_default(s: str) -> str:
    """Extract custom default inside {}
    >>> get_custom_default("no_custom_default|thrift.box")
    ''
    >>> get_custom_default("i32{42}|thrift.box")
    '42'
    """
    if not has_custom_default(s):
        return ""
    return s[s.find("{") + 1 : s.find("}")]


def has_modifiers(s: str) -> bool:
    return "|" in s


def remove_modifiers(s: str) -> str:
    return s.partition("|")[0]


def get_modifiers(s: str) -> str:
    partition = s.partition("|")
    return partition[1] + partition[2]


def gen_primatives_impl(
    target: Target,
    prims: Iterable[str],
    transform: Dict[Target, str],
) -> Dict[str, str]:
    result = {}
    for prim in prims:
        value = transform[target].format(
            remove_custom_default(prim)
            if target in [Target.CPP2, Target.NAME]
            else prim
        )
        result[transform[Target.NAME].format(remove_custom_default(prim))] = value
    return result


def gen_primatives(
    target: Target, prims: Iterable[str] = PRIMITIVE_TYPES
) -> Dict[str, str]:
    return gen_primatives_impl(target, prims, PRIMATIVE_TRANSFORM)


def gen_primatives_with_custom_default(
    target: Target,
) -> Dict[str, str]:
    return gen_primatives_impl(
        target, PRIMITIVE_TYPES_WITH_CUSTOM_DEFAULT, PRIMATIVE_CUSTOM_DEFAULT_TRANSFORM
    )


def gen_primatives_with_alternative_custom_default(
    target: Target,
) -> Dict[str, str]:
    return gen_primatives_impl(
        target,
        PRIMITIVE_TYPES_WITH_ALTERNATIVE_CUSTOM_DEFAULT,
        PRIMATIVE_ALTERNATIVE_CUSTOM_DEFAULT_TRANSFORM,
    )


def _gen_unary_tramsform(
    transform: Dict[Target, str], target: Target, values: Dict[str, str]
) -> Dict[str, str]:
    result = {}
    for name, value_t in values.items():
        result[transform[Target.NAME].format(name)] = transform[target].format(
            value_t, name
        )
    return result


def gen_lists(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(LIST_TRANSFORM, target, values)


def gen_sets(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(SET_TRANSFORM, target, values)


def gen_maps(
    target: Target, keys: Dict[str, str], values: Dict[str, str]
) -> Dict[str, str]:
    result = {}
    for key_name, key_t in keys.items():
        for value_name, value_t in values.items():
            name = MAP_TRANSFORM[Target.NAME].format(key_name, value_name)
            value = MAP_TRANSFORM[target].format(key_t, value_t)
            result[name] = value
    return result


def gen_optional(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(OPTIONAL_TRANSFORM, target, values)


def gen_required(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(REQUIRED_TRANSFORM, target, values)


def gen_terse(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(TERSE_TRANSFORM, target, values)


def gen_cpp_ref(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(CPP_REF_TRANSFORM, target, values)


def gen_shared_cpp_ref(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(SHARED_CPP_REF_TRANSFORM, target, values)


def gen_lazy(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(LAZY_TRANSFORM, target, values)


def gen_box(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(BOX_TRANSFORM, target, values)


def gen_adapted(
    target: Target, values: Dict[str, str], include_hack: bool = True
) -> Dict[str, str]:
    if include_hack:
        return _gen_unary_tramsform(ADAPTER_TRANSFORM, target, values)
    else:
        return _gen_unary_tramsform(NON_HACK_ADAPTER_TRANSFORM, target, values)


def gen_field_adapted(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(FIELD_ADAPTER_TRANSFORM, target, values)


def gen_container_fields(target: Target) -> Dict[str, str]:
    """Generates field name -> type that are appropriate for use in unions."""
    prims = gen_primatives(target, PRIMITIVE_TYPES)
    keys = gen_primatives(target, KEY_TYPES)

    lists = gen_lists(target, prims)
    sets = gen_sets(target, keys)
    maps = gen_maps(target, keys, prims)

    maps_to_sets = gen_maps(target, keys, sets)

    return {**lists, **sets, **maps, **maps_to_sets}


def gen_union_fields(target: Target) -> Dict[str, str]:
    ret = gen_container_fields(target)
    ret.update(**gen_cpp_ref(target, ret), **gen_shared_cpp_ref(target, ret))
    ret.update(gen_primatives(target, PRIMITIVE_TYPES))
    return ret


def gen_lazy_fields(target: Target) -> Dict[str, str]:
    fields = gen_container_fields(target)
    fields.update(gen_primatives(target, ["string"]))
    return gen_lazy(target, fields)


def gen_optional_box_fields(target: Target) -> Dict[str, str]:
    return gen_optional(target, gen_box(target, gen_container_fields(target)))


def gen_struct_fields(target: Target) -> Dict[str, str]:
    """Generates field name -> type that are appropriate for use in structs."""
    ret = gen_union_fields(target)
    ret.update(**gen_primatives_with_custom_default(target))
    ret.update(**gen_primatives_with_alternative_custom_default(target))
    ret.update(
        **gen_optional(target, ret),
        **gen_required(target, ret),
        **gen_terse(target, ret),
        **gen_optional_box_fields(target),
        **gen_adapted(target, gen_primatives(target)),
        **gen_adapted(target, gen_container_fields(target)),
        **gen_field_adapted(target, gen_primatives(target)),
        **gen_field_adapted(target, gen_container_fields(target)),
    )
    ret.update(**gen_lazy_fields(target))
    return ret


def gen_exclude_hack(target: Target, values: Dict[str, str]) -> Dict[str, str]:
    return _gen_unary_tramsform(HACK_NONCONFORMING_TRANSFORM, target, values)


def gen_adapted_typedefs_transform(
    target: Target, values: Dict[str, str]
) -> Dict[str, str]:
    adapted_typedefs = {}
    for key in values:
        if target == Target.CPP2:
            adapted_typedefs[f"adapted_typedef_{key}"] = (
                "type::adapted<::apache::thrift::test::TemplatedTestAdapter, "
                + f"{remove_modifiers(values[key])}>{get_modifiers(values[key])}"
            )
        else:
            if has_custom_default(values[key]):
                adapted_typedefs[f"adapted_typedef_{key}"] = (
                    f"adapted_typedef_{remove_custom_default(values[key])}{{{get_custom_default(values[key])}}}"
                )
            else:
                adapted_typedefs[f"adapted_typedef_{key}"] = f"adapted_typedef_{key}"
    return adapted_typedefs


def gen_adapted_typedef_fields(target: Target) -> Dict[str, str]:
    primitives = gen_primatives(target)
    return gen_adapted_typedefs_transform(target, primitives)


def gen_adapted_typedef_key_fields(target: Target) -> Dict[str, str]:
    primitives = gen_primatives(target, KEY_TYPES)
    return gen_adapted_typedefs_transform(target, primitives)


def gen_adapted_typedef_fields_with_custom_default(target: Target) -> Dict[str, str]:
    primitives = gen_primatives_with_custom_default(target)
    return gen_adapted_typedefs_transform(target, primitives)


def gen_adapted_typedef_fields_with_alternative_custom_default(
    target: Target,
) -> Dict[str, str]:
    primitives = gen_primatives_with_alternative_custom_default(target)
    return gen_adapted_typedefs_transform(target, primitives)


def gen_union_adapted_typedef_fields(target: Target) -> Dict[str, str]:
    ret = gen_adapted_typedef_fields(target)
    ret.update(**gen_lists(target, gen_adapted_typedef_fields(target)))
    ret.update(
        **gen_exclude_hack(
            target,
            gen_sets(target, gen_adapted_typedef_key_fields(target)),
        )
    )
    ret.update(
        **gen_exclude_hack(
            target,
            gen_maps(
                target,
                gen_adapted_typedef_key_fields(target),
                gen_adapted_typedef_fields(target),
            ),
        )
    )
    return ret


def gen_adapted_typedef_structs(target: Target) -> Dict[str, str]:
    ret = gen_union_adapted_typedef_fields(target)
    ret.update(**gen_adapted_typedef_fields_with_custom_default(target))
    ret.update(**gen_adapted_typedef_fields_with_alternative_custom_default(target))
    ret.update(
        **gen_adapted(
            target, gen_union_adapted_typedef_fields(target), include_hack=False
        )
    )
    ret.update(**gen_field_adapted(target, gen_union_adapted_typedef_fields(target)))
    return ret


def is_structured_annot(annot: str) -> bool:
    return annot[0] == "@"


def is_unstructured_annot(annot: str) -> bool:
    return not is_structured_annot(annot)


def gen_thrift_value(
    field_type: str,
    idx: Optional[int],
) -> str:
    annotations = ""
    structured_annotations = ""
    if has_modifiers(field_type):
        v = field_type.split("|")
        field_type = v[0]

        annots = list(filter(is_unstructured_annot, v[1:]))
        structured_annots = list(filter(is_structured_annot, v[1:]))

        if annots:
            annotations = " (" + ", ".join(annots) + ")"
        if structured_annots:
            structured_annotations = "  " + "\n  ".join(structured_annots) + "\n"
    if not has_custom_default(field_type):
        if idx is not None:
            return "{3}  {0}: {1} field_{0}{2};".format(
                idx + 1, field_type, annotations, structured_annotations
            )
        else:
            return "{2}  {0} {1}".format(
                field_type, annotations, structured_annotations
            )
    else:
        if idx is not None:
            return "{4}  {0}: {1} field_{0} = {2}{3};".format(
                idx + 1,
                remove_custom_default(field_type),
                get_custom_default(field_type),
                annotations,
                structured_annotations,
            )
        else:
            return "{3}  {0} = {1}{2};".format(
                remove_custom_default(field_type),
                get_custom_default(field_type),
                annotations,
                structured_annotations,
            )


def gen_thrift_def(
    transform: Dict[Target, str], name: str, field_types: List[str]
) -> str:
    """Generate thrift struct from types
    >>> print(gen_thrift_def(STRUCT_TRANSFORM, "Foo", ["i64", "optional string", "set<i32>|cpp.ref", "optional i32|@thrift.Box", "i32|@thrift.A|@thrift.B|cpp.ref"]))
    struct Foo {
      1: i64 field_1;
      2: optional string field_2;
      3: set<i32> field_3 (cpp.ref);
      @thrift.Box
      4: optional i32 field_4;
      @thrift.A
      @thrift.B
      5: i32 field_5 (cpp.ref);
    }
    """
    decl = transform[Target.THRIFT].format(name)
    lines = [f"{decl} {{"]
    for idx, field_type in enumerate(field_types):
        lines.append(gen_thrift_value(field_type, idx))
    lines.append("}")
    return "\n".join(lines)


def print_thrift_typedefs(
    transform: Dict[Target, str], fields: Dict[str, str], *, file: TextIO = sys.stdout
) -> List[str]:
    classes = []
    for name, value_t in fields.items():
        class_name = transform[Target.NAME].format(name)
        classes.append(class_name)
        class_name += get_modifiers(value_t)
        value_t = remove_modifiers(value_t)
        print(
            gen_thrift_value(
                transform[Target.THRIFT].format(value_t, class_name, class_name), None
            ),
            file=file,
        )
    return classes


def print_thrift_structs(
    transform: Dict[Target, str],
    fields: Dict[str, str],
    count: int = 1,
    include_empty: bool = True,
    *,
    file: TextIO = sys.stdout,
) -> List[str]:
    """Prints one thrift class def per field in fields and returns the names of all the classes."""
    if include_empty:
        empty_name = transform[Target.NAME].format("empty")
        print(gen_thrift_def(transform, empty_name, []), file=file)
        classes = [empty_name]
    else:
        classes = []
    for name, value_t in fields.items():
        class_name = transform[Target.NAME].format(name)
        classes.append(class_name)
        print(gen_thrift_def(transform, class_name, [value_t] * count), file=file)
    return classes


def gen_thrift(path: str) -> None:
    with open(path, "w") as file:
        print(THRIFT_HEADER, file=file)
        classes = []

        # Generate all structs.
        struct_fields = gen_struct_fields(Target.THRIFT)
        classes.extend(print_thrift_structs(STRUCT_TRANSFORM, struct_fields, file=file))
        classes.extend(
            print_thrift_structs(OP_ENCODED_STRUCT_TRANSFORM, struct_fields, file=file)
        )

        # Generate all exceptions, with the struct fields.
        print_thrift_structs(EXCEPTION_TRANSFORM, struct_fields, file=file)
        print_thrift_structs(OP_ENCODED_EXCEPTION_TRANSFORM, struct_fields, file=file)

        # Generate all typedefs and structs that use them.
        typedef_fields = gen_primatives(Target.THRIFT)
        print_thrift_typedefs(ADAPTED_TYPEDEF_TRANSFORM, typedef_fields, file=file)
        classes.extend(
            print_thrift_structs(
                TYPEDEF_STRUCT_TRANSFORM,
                gen_adapted_typedef_structs(Target.THRIFT),
                include_empty=False,
                file=file,
            )
        )

        union_fields = gen_union_fields(Target.THRIFT)
        # Generate all unions.
        classes.extend(
            print_thrift_structs(UNION_TRANSFORM, union_fields, count=2, file=file)
        )
        classes.extend(
            print_thrift_structs(
                OP_ENCODED_UNION_TRANSFORM, union_fields, count=2, file=file
            )
        )

        union_typedefs = gen_union_adapted_typedef_fields(Target.THRIFT)
        classes.extend(
            print_thrift_structs(
                UNION_TRANSFORM, union_typedefs, include_empty=False, count=2, file=file
            )
        )
        print_thrift_structs(
            EXCEPTION_TRANSFORM, union_typedefs, include_empty=False, file=file
        )


CPP2_SPECIALIZE_TEMPLATE = """template <>
struct {}<{}, mod_set<{}>> {{
  using type = {};
}};
"""


def print_cpp2_specialization(
    transform: Dict[Target, str], fields: Dict[str, str], *, file: TextIO = sys.stdout
) -> None:
    for field, value_mods in fields.items():
        value_t = remove_modifiers(value_mods)
        mods = get_modifiers(value_mods)
        mods += get_modifiers(transform[Target.CPP2].format(field))
        mods = mods[1:].replace("|", ", ")
        name = transform[Target.NAME].format(field)
        by_type = name.split("_")[0] + "_ByFieldType"
        print(CPP2_SPECIALIZE_TEMPLATE.format(by_type, value_t, mods, name), file=file)


def gen_cpp2(path: str) -> None:
    with open(path, "w") as file:
        print(CPP2_HEADER, file=file)

        # Generate specialization for all structs.
        struct_fields = gen_struct_fields(Target.CPP2)
        print_cpp2_specialization(STRUCT_TRANSFORM, struct_fields, file=file)
        print_cpp2_specialization(OP_ENCODED_STRUCT_TRANSFORM, struct_fields, file=file)

        # Generate specialization for all exceptions.
        print_cpp2_specialization(EXCEPTION_TRANSFORM, struct_fields, file=file)
        print_cpp2_specialization(
            OP_ENCODED_EXCEPTION_TRANSFORM, struct_fields, file=file
        )

        print_cpp2_specialization(
            TYPEDEF_STRUCT_TRANSFORM,
            gen_adapted_typedef_structs(Target.CPP2),
            file=file,
        )

        # Generate specialization for all unions.
        union_fields = gen_union_fields(Target.CPP2)
        print_cpp2_specialization(UNION_TRANSFORM, union_fields, file=file)
        print_cpp2_specialization(OP_ENCODED_UNION_TRANSFORM, union_fields, file=file)

        union_typedefs = gen_union_adapted_typedef_fields(Target.CPP2)
        print_cpp2_specialization(UNION_TRANSFORM, union_typedefs, file=file)
        print_cpp2_specialization(EXCEPTION_TRANSFORM, union_typedefs, file=file)

        print(CPP2_FOOTER, file=file)


def generate(dir: str) -> None:
    gen_thrift(os.path.join(dir, "testset.thrift"))
    gen_cpp2(os.path.join(dir, "Testset.h"))


def main() -> None:
    doctest.testmod()
    parser = argparse.ArgumentParser()
    parser.add_argument("--install_dir", required=True)
    args = parser.parse_args()
    generate(args.install_dir)


if __name__ == "__main__":
    main()

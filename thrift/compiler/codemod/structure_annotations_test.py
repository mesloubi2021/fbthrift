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

# pyre-unsafe

import os
import shutil
import tempfile
import textwrap
import unittest

import pkg_resources

from thrift.compiler.codemod.test_utils import read_file, run_binary, write_file


class StructureAnnotations(unittest.TestCase):
    def setUp(self):
        tmp = tempfile.mkdtemp()
        self.addCleanup(shutil.rmtree, tmp, True)
        self.tmp = tmp
        self.addCleanup(os.chdir, os.getcwd())
        os.chdir(self.tmp)
        self.maxDiff = None

    def trim(self, s):
        return "\n".join([line.strip() for line in s.splitlines()])

    def test_existing_include(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                include "thrift/annotation/cpp.thrift"

                typedef i32 foo (cpp.type = "foo")

                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift/annotation/cpp.thrift"

                @cpp.Type{name = "foo"}
                typedef i32 foo
                """
            ),
        )

    def test_ref(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                struct S {
                    1: i32 plain;
                    2: i32 ref (cpp.ref);
                    3: i32 ref2 (cpp2.ref);
                    4: i32 ref3 (cpp2.ref = "true");
                    5: i32 unique (cpp.ref_type = "unique");
                    6: i32 shared (cpp.ref_type = "shared");
                    7: i32 shared_const (cpp.ref_type = "shared_const");
                    8: i32 shared_mutable (cpp.ref_type = "shared_mutable");
                    10: i32 box (thrift.box);
                    11: i32 overwrite (cpp.ref, cpp.ref_type = "shared_const");
                    12: i32 NOT (cpp.ref = "true", cpp2.ref = "true", objc.box);
                }

                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift/annotation/cpp.thrift"

                include "thrift/annotation/thrift.thrift"

                struct S {
                    1: i32 plain;
                    @cpp.Ref{type = cpp.RefType.Unique}
                    2: i32 ref ;
                    @cpp.Ref{type = cpp.RefType.Unique}
                    3: i32 ref2 ;
                    @cpp.Ref{type = cpp.RefType.Unique}
                    4: i32 ref3 ;
                    @cpp.Ref{type = cpp.RefType.Unique}
                    5: i32 unique ;
                    @cpp.Ref{type = cpp.RefType.SharedMutable}
                    6: i32 shared ;
                    @cpp.Ref{type = cpp.RefType.Shared}
                    7: i32 shared_const ;
                    @cpp.Ref{type = cpp.RefType.SharedMutable}
                    8: i32 shared_mutable ;
                    @thrift.Box
                    10: i32 box ;
                    @cpp.Ref{type = cpp.RefType.Shared}
                    11: i32 overwrite ;
                    @cpp.Ref{type = cpp.RefType.Unique}
                    @thrift.DeprecatedUnvalidatedAnnotations{items = {"objc.box": "1"}}
                    12: i32 NOT ;
                }
                """
            ),
        )

    def test_cpp(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                typedef i32 foo (cpp.type = "foo")
                typedef i32 (cpp.type = "bar") bar (cpp.name = "bars")

                struct S {
                    1: i32 (cpp.type = "baz") baz;
                    2: i32 qux (cpp.type = "oops!");
                    3: foo noAdd;
                    4: i32 (cpp.template = "oops!") notContainer;
                    5: UnknownType (cpp.type = "foo") unknown;
                }

                struct S {
                    1: M mixin (cpp.mixin, cpp.experimental.lazy);
                } (cpp.minimize_padding)
                struct M {}

                exception E {
                    1: string m;
                    2: i32 c;
                } (message="m", cpp.minimize_padding)
                exception EE {}

                enum E8 {} (cpp.enum_type="char")
                enum E16 {} (cpp.enum_type="int16_t")
                enum E32 {} (cpp.enum_type="int")
                enum U8 {} (cpp.enum_type="std::uint8_t")
                enum U16 {} (cpp.enum_type="unsigned short")
                enum U32 {} (cpp.enum_type="::std::uint32_t", cpp.declare_bitwise_ops)

                interaction I {} (process_in_event_base)
                interaction J {} (serial)
                service S {
                    void f() (thread = "eb", priority = "HIGH")
                    void j() (thread = "tm", priority = "ZUCK-LEVEL")
                } (priority = "BEST_EFFORT")

                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift/annotation/cpp.thrift"

                include "thrift/annotation/thrift.thrift"

                @cpp.Type{name = "foo"}
                typedef i32 foo
                @cpp.Name{value = "bars"}
                @cpp.Type{name = "bar"}
                typedef i32  bar

                struct S {
                    @cpp.Type{name = "baz"}
                    1: i32  baz;
                    2: i32 qux ;
                    3: foo noAdd;
                    4: i32  notContainer;
                    @cpp.Type{name = "foo"}
                    5: UnknownType  unknown;
                }

                @cpp.MinimizePadding
                struct S {
                    @cpp.Lazy
                    @thrift.Mixin
                    1: M mixin ;
                }
                struct M {}

                @cpp.MinimizePadding
                exception E {
                    @thrift.ExceptionMessage
                    1: string m;
                    2: i32 c;
                }
                exception EE {}

                @cpp.EnumType{type = cpp.EnumUnderlyingType.I8}
                enum E8 {}
                @cpp.EnumType{type = cpp.EnumUnderlyingType.I16}
                enum E16 {}
                enum E32 {}
                @cpp.EnumType{type = cpp.EnumUnderlyingType.U8}
                enum U8 {}
                @cpp.EnumType{type = cpp.EnumUnderlyingType.U16}
                enum U16 {}
                @cpp.EnumType{type = cpp.EnumUnderlyingType.U32}
                enum U32 {} ( cpp.declare_bitwise_ops)

                @cpp.ProcessInEbThreadUnsafe
                interaction I {}
                @thrift.Serial
                interaction J {}
                service S {
                    @cpp.ProcessInEbThreadUnsafe
                    @thrift.Priority{level = thrift.RpcPriority.HIGH}
                    void f()
                    void j()
                } (priority = "BEST_EFFORT")
                """
            ),
        )

    def test_hack(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                enum E {} (bitmask, cpp.declare_bitwise_ops, hack.attributes="JSEnum, GraphQLEnum('SRTJobTypeEnum', 'Auto-generated from PHP enum SRTJobType.'), GraphQLLegacyNamingScheme, Oncalls('srt_core'), WarehouseEnum(shape('hive_enum_map' => true))")
                struct F {} (
                    hack.name = "F1",
                    hack.attributes = '\\GraphQLEnum("InstagramRingType", "Identifier for the type of ring overlaid on a user\\x27s profile icon"), \\Oncalls("ig_rc_de")',
                )
                struct G {} (
                hack.attributes = "
                JSEnum,
                GraphQLLegacyNamingScheme, GraphQLEnum(
                    'ServiceTagCategory',
                    'The possible category types that a Service Tag can belong to',
                )
",
                )

                exception X {
                    1: string m;
                    2: i32 c;
                } (message="m", code="c")

                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift/annotation/hack.thrift"

                include "thrift/annotation/thrift.thrift"

                @hack.Attributes{attributes = ["JSEnum", "GraphQLEnum('SRTJobTypeEnum', 'Auto-generated from PHP enum SRTJobType.')", "GraphQLLegacyNamingScheme", "Oncalls('srt_core')", "WarehouseEnum(shape('hive_enum_map' => true))"]}
                @thrift.BitmaskEnum
                enum E {}
                @hack.Attributes{attributes = ['\\GraphQLEnum("InstagramRingType", "Identifier for the type of ring overlaid on a user\\x27s profile icon")', '\\Oncalls("ig_rc_de")']}
                @hack.Name{name = "F1"}
                struct F {}
                @hack.Attributes{attributes = ["JSEnum", "GraphQLLegacyNamingScheme", "GraphQLEnum(
                'ServiceTagCategory',
                'The possible category types that a Service Tag can belong to',
                )"]}
                struct G {}

                exception X {
                    @thrift.ExceptionMessage
                    1: string m;
                    2: i32 c;
                }
                """
            ),
        )

    def test_python(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                enum E {} (py3.flags)
                typedef binary T (py3.hidden, py3.name = "U")

                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift/annotation/python.thrift"

                @python.Flags
                enum E {}
                @python.Name{name = "U"}
                @python.Py3Hidden
                typedef binary T
                """
            ),
        )

    def test_java(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                struct S {}
                (
                    java.swift.annotations = "@com.facebook.Foo
                        @com.facebook.Bar",
                    java.swift.mutable = "true",
                )
                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift/annotation/java.thrift"

                @java.Annotation{java_annotation = "@com.facebook.Foo
                    @com.facebook.Bar"}
                @java.Mutable
                struct S {}
                """
            ),
        )

    def test_go(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                struct S {
                    1: i32 field1 (go.name = "field4");
                    2: i32 field2 (go.tag = 'json:"clientID" yaml:"clientID"');
                }

                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift/annotation/go.thrift"

                struct S {
                    @go.Name{name = "field4"}
                    1: i32 field1 ;
                    @go.Tag{tag = 'json:"clientID" yaml:"clientID"'}
                    2: i32 field2 ;
                }
                """
            ),
        )

    def test_erlang(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                struct S {
                    1: i32 field1 (iq.node_type = "xmlattribute");
                } (erl.struct_repr = 'record', erl.name = 'T')

                enum E {QUX = 1} (erl.default_value = "QUX")

                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift/annotation/erlang.thrift"

                @annotation.NameOverride{name = "T"}
                @annotation.StructRepr{repr = annotation.StructReprType.RECORD}
                struct S {
                    @annotation.Iq{node_type = annotation.IqNodeType.XMLATTRIBUTE}
                    1: i32 field1 ;
                }

                @annotation.DefaultValue{value = "QUX"}
                enum E {QUX = 1}
                """
            ),
        )

    def test_rust(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                struct S {
                    1: i32 (rust.type = "u32") f (rust.name = "foo", rust.box, rust.type = "foo");
                } (rust.arc, rust.copy, rust.exhaustive, rust.ord, rust.serde = "true", rust.mod = "foo", rust.derive = "Foo, Bar")

                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift/annotation/rust.thrift"

                @rust.Arc
                @rust.Copy
                @rust.Derive{derive = ["Foo","Bar"]}
                @rust.Exhaustive
                @rust.Mod{name = "foo"}
                @rust.Ord
                @rust.Serde{enabled = true}
                struct S {
                  @rust.Box
                  @rust.Name{name = "foo"}
                  @rust.Type{name = "u32"}
                  1: i32  f ;
                }
                """
            ),
        )

    def test_remaining(self):
        write_file(
            "foo.thrift",
            textwrap.dedent(
                """\
                include "thrift.thrift"

                struct S {
                    1: i32 field1 (foo);
                }(foo, bar = "baz")

                typedef i32 (foo, hs.type = "hs") T (bar = "baz", hs.category = "value")

                enum E {QUX = 1} (foo, bar = "baz")

                @DeprecatedUnvalidatedAnnotations{items = {"bar": "baz", "foo": "1"}}
                struct AlreadyVisited {
                    @DeprecatedUnvalidatedAnnotations{items = {"bar": "baz", "foo": "1"}}
                    1: i32 f;
                }

                """
            ),
        )
        write_file(
            "thrift.thrift",
            textwrap.dedent(
                """\
                package "facebook.com/thrift/annotation"

                struct DeprecatedUnvalidatedAnnotations {
                    1: map<string, string> items;
                }
                """
            ),
        )

        binary = pkg_resources.resource_filename(__name__, "codemod")
        run_binary(binary, "foo.thrift")

        self.assertEqual(
            self.trim(read_file("foo.thrift")),
            self.trim(
                """\
                include "thrift.thrift"
                include "thrift/annotation/thrift.thrift"

                @thrift.DeprecatedUnvalidatedAnnotations{items = {"bar": "baz", "foo": "1"}}
                struct S {
                    @thrift.DeprecatedUnvalidatedAnnotations{items = {"foo": "1"}}
                    1: i32 field1 ;
                }

                @thrift.DeprecatedUnvalidatedAnnotations{items = {"bar": "baz", "foo": "1"}}
                typedef i32 ( hs.type = "hs") T ( hs.category = "value")

                @thrift.DeprecatedUnvalidatedAnnotations{items = {"bar": "baz", "foo": "1"}}
                enum E {QUX = 1}

                @DeprecatedUnvalidatedAnnotations{items = {"bar": "baz", "foo": "1"}}
                struct AlreadyVisited {
                    @DeprecatedUnvalidatedAnnotations{items = {"bar": "baz", "foo": "1"}}
                    1: i32 f;
                }
                """
            ),
        )

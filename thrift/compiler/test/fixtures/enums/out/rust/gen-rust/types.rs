// @generated by Thrift for thrift/compiler/test/fixtures/enums/src/module.thrift
// This file is probably not the place you want to edit!


#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, clippy::redundant_closure, clippy::type_complexity)]

#[allow(unused_imports)]
pub(crate) use crate as types;

#[derive(Clone, PartialEq)]
pub struct SomeStruct {
    pub reasonable: crate::types::Metasyntactic,
    pub fine: crate::types::Metasyntactic,
    pub questionable: crate::types::Metasyntactic,
    pub tags: ::std::collections::BTreeSet<::std::primitive::i32>,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `@rust.Exhaustive` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct MyStruct {
    pub me2_3: crate::types::MyEnum2,
    pub me3_n3: crate::types::MyEnum3,
    pub me1_t1: crate::types::MyEnum1,
    pub me1_t2: crate::types::MyEnum1,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `@rust.Exhaustive` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}


#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct Metasyntactic(pub ::std::primitive::i32);

impl Metasyntactic {
    pub const FOO: Self = Metasyntactic(1i32);
    pub const BAR: Self = Metasyntactic(2i32);
    pub const BAZ: Self = Metasyntactic(3i32);
    pub const BAX: Self = Metasyntactic(4i32);
}

impl ::fbthrift::ThriftEnum for Metasyntactic {
    fn enumerate() -> &'static [(Self, &'static ::std::primitive::str)] {
        &[
            (Self::FOO, "FOO"),
            (Self::BAR, "BAR"),
            (Self::BAZ, "BAZ"),
            (Self::BAX, "BAX"),
        ]
    }

    fn variants() -> &'static [&'static ::std::primitive::str] {
        &[
            "FOO",
            "BAR",
            "BAZ",
            "BAX",
        ]
    }

    fn variant_values() -> &'static [Self] {
        &[
            Self::FOO,
            Self::BAR,
            Self::BAZ,
            Self::BAX,
        ]
    }

    fn inner_value(&self) -> i32 {
        self.0
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for Metasyntactic {
    fn default() -> Self {
        Self(0)
    }
}

impl<'a> ::std::convert::From<&'a Metasyntactic> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a Metasyntactic) -> Self {
        x.0
    }
}

impl ::std::convert::From<Metasyntactic> for ::std::primitive::i32 {
    #[inline]
    fn from(x: Metasyntactic) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for Metasyntactic {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for Metasyntactic {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("FOO", 1),
            ("BAR", 2),
            ("BAZ", 3),
            ("BAX", 4),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for Metasyntactic {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "Metasyntactic::{}", self)
    }
}

impl ::std::str::FromStr for Metasyntactic {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("BAR", 2),
            ("BAX", 4),
            ("BAZ", 3),
            ("FOO", 1),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "Metasyntactic").map(Self)
    }
}

impl ::fbthrift::GetTType for Metasyntactic {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl ::fbthrift::GetUri for self::Metasyntactic {
    fn uri() -> &'static ::std::primitive::str {
        "test.dev/fixtures/enums/Metasyntactic"
    }
}

impl<P> ::fbthrift::Serialize<P> for Metasyntactic
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for Metasyntactic
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(Self::from(::anyhow::Context::context(p.read_i32(), "Expected a number indicating enum variant")?))
    }
}
#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyEnum1(pub ::std::primitive::i32);

impl MyEnum1 {
    pub const ME1_0: Self = MyEnum1(0i32);
    pub const ME1_1: Self = MyEnum1(1i32);
    pub const ME1_2: Self = MyEnum1(2i32);
    pub const ME1_3: Self = MyEnum1(3i32);
    pub const ME1_5: Self = MyEnum1(5i32);
    pub const ME1_6: Self = MyEnum1(6i32);
}

impl ::fbthrift::ThriftEnum for MyEnum1 {
    fn enumerate() -> &'static [(Self, &'static ::std::primitive::str)] {
        &[
            (Self::ME1_0, "ME1_0"),
            (Self::ME1_1, "ME1_1"),
            (Self::ME1_2, "ME1_2"),
            (Self::ME1_3, "ME1_3"),
            (Self::ME1_5, "ME1_5"),
            (Self::ME1_6, "ME1_6"),
        ]
    }

    fn variants() -> &'static [&'static ::std::primitive::str] {
        &[
            "ME1_0",
            "ME1_1",
            "ME1_2",
            "ME1_3",
            "ME1_5",
            "ME1_6",
        ]
    }

    fn variant_values() -> &'static [Self] {
        &[
            Self::ME1_0,
            Self::ME1_1,
            Self::ME1_2,
            Self::ME1_3,
            Self::ME1_5,
            Self::ME1_6,
        ]
    }

    fn inner_value(&self) -> i32 {
        self.0
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for MyEnum1 {
    fn default() -> Self {
        Self(0)
    }
}

impl<'a> ::std::convert::From<&'a MyEnum1> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyEnum1) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyEnum1> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyEnum1) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyEnum1 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyEnum1 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME1_0", 0),
            ("ME1_1", 1),
            ("ME1_2", 2),
            ("ME1_3", 3),
            ("ME1_5", 5),
            ("ME1_6", 6),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyEnum1 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyEnum1::{}", self)
    }
}

impl ::std::str::FromStr for MyEnum1 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME1_0", 0),
            ("ME1_1", 1),
            ("ME1_2", 2),
            ("ME1_3", 3),
            ("ME1_5", 5),
            ("ME1_6", 6),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyEnum1").map(Self)
    }
}

impl ::fbthrift::GetTType for MyEnum1 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl ::fbthrift::GetUri for self::MyEnum1 {
    fn uri() -> &'static ::std::primitive::str {
        "test.dev/fixtures/enums/MyEnum1"
    }
}

impl<P> ::fbthrift::Serialize<P> for MyEnum1
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyEnum1
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(Self::from(::anyhow::Context::context(p.read_i32(), "Expected a number indicating enum variant")?))
    }
}
#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyEnum2(pub ::std::primitive::i32);

impl MyEnum2 {
    pub const ME2_0: Self = MyEnum2(0i32);
    pub const ME2_1: Self = MyEnum2(1i32);
    pub const ME2_2: Self = MyEnum2(2i32);
}

impl ::fbthrift::ThriftEnum for MyEnum2 {
    fn enumerate() -> &'static [(Self, &'static ::std::primitive::str)] {
        &[
            (Self::ME2_0, "ME2_0"),
            (Self::ME2_1, "ME2_1"),
            (Self::ME2_2, "ME2_2"),
        ]
    }

    fn variants() -> &'static [&'static ::std::primitive::str] {
        &[
            "ME2_0",
            "ME2_1",
            "ME2_2",
        ]
    }

    fn variant_values() -> &'static [Self] {
        &[
            Self::ME2_0,
            Self::ME2_1,
            Self::ME2_2,
        ]
    }

    fn inner_value(&self) -> i32 {
        self.0
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for MyEnum2 {
    fn default() -> Self {
        Self(0)
    }
}

impl<'a> ::std::convert::From<&'a MyEnum2> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyEnum2) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyEnum2> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyEnum2) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyEnum2 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyEnum2 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME2_0", 0),
            ("ME2_1", 1),
            ("ME2_2", 2),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyEnum2 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyEnum2::{}", self)
    }
}

impl ::std::str::FromStr for MyEnum2 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME2_0", 0),
            ("ME2_1", 1),
            ("ME2_2", 2),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyEnum2").map(Self)
    }
}

impl ::fbthrift::GetTType for MyEnum2 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl ::fbthrift::GetUri for self::MyEnum2 {
    fn uri() -> &'static ::std::primitive::str {
        "test.dev/fixtures/enums/MyEnum2"
    }
}

impl<P> ::fbthrift::Serialize<P> for MyEnum2
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyEnum2
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(Self::from(::anyhow::Context::context(p.read_i32(), "Expected a number indicating enum variant")?))
    }
}
#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyEnum3(pub ::std::primitive::i32);

impl MyEnum3 {
    pub const ME3_0: Self = MyEnum3(0i32);
    pub const ME3_1: Self = MyEnum3(1i32);
    pub const ME3_N2: Self = MyEnum3(-2i32);
    pub const ME3_N1: Self = MyEnum3(-1i32);
    pub const ME3_9: Self = MyEnum3(9i32);
    pub const ME3_10: Self = MyEnum3(10i32);
}

impl ::fbthrift::ThriftEnum for MyEnum3 {
    fn enumerate() -> &'static [(Self, &'static ::std::primitive::str)] {
        &[
            (Self::ME3_0, "ME3_0"),
            (Self::ME3_1, "ME3_1"),
            (Self::ME3_N2, "ME3_N2"),
            (Self::ME3_N1, "ME3_N1"),
            (Self::ME3_9, "ME3_9"),
            (Self::ME3_10, "ME3_10"),
        ]
    }

    fn variants() -> &'static [&'static ::std::primitive::str] {
        &[
            "ME3_0",
            "ME3_1",
            "ME3_N2",
            "ME3_N1",
            "ME3_9",
            "ME3_10",
        ]
    }

    fn variant_values() -> &'static [Self] {
        &[
            Self::ME3_0,
            Self::ME3_1,
            Self::ME3_N2,
            Self::ME3_N1,
            Self::ME3_9,
            Self::ME3_10,
        ]
    }

    fn inner_value(&self) -> i32 {
        self.0
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for MyEnum3 {
    fn default() -> Self {
        Self(0)
    }
}

impl<'a> ::std::convert::From<&'a MyEnum3> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyEnum3) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyEnum3> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyEnum3) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyEnum3 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyEnum3 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME3_N2", -2),
            ("ME3_N1", -1),
            ("ME3_0", 0),
            ("ME3_1", 1),
            ("ME3_9", 9),
            ("ME3_10", 10),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyEnum3 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyEnum3::{}", self)
    }
}

impl ::std::str::FromStr for MyEnum3 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME3_0", 0),
            ("ME3_1", 1),
            ("ME3_10", 10),
            ("ME3_9", 9),
            ("ME3_N1", -1),
            ("ME3_N2", -2),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyEnum3").map(Self)
    }
}

impl ::fbthrift::GetTType for MyEnum3 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl ::fbthrift::GetUri for self::MyEnum3 {
    fn uri() -> &'static ::std::primitive::str {
        "test.dev/fixtures/enums/MyEnum3"
    }
}

impl<P> ::fbthrift::Serialize<P> for MyEnum3
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyEnum3
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(Self::from(::anyhow::Context::context(p.read_i32(), "Expected a number indicating enum variant")?))
    }
}
#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyEnum4(pub ::std::primitive::i32);

impl MyEnum4 {
    pub const ME4_A: Self = MyEnum4(2147483645i32);
    pub const ME4_B: Self = MyEnum4(2147483646i32);
    pub const ME4_C: Self = MyEnum4(2147483647i32);
    pub const ME4_D: Self = MyEnum4(-2147483648i32);
}

impl ::fbthrift::ThriftEnum for MyEnum4 {
    fn enumerate() -> &'static [(Self, &'static ::std::primitive::str)] {
        &[
            (Self::ME4_A, "ME4_A"),
            (Self::ME4_B, "ME4_B"),
            (Self::ME4_C, "ME4_C"),
            (Self::ME4_D, "ME4_D"),
        ]
    }

    fn variants() -> &'static [&'static ::std::primitive::str] {
        &[
            "ME4_A",
            "ME4_B",
            "ME4_C",
            "ME4_D",
        ]
    }

    fn variant_values() -> &'static [Self] {
        &[
            Self::ME4_A,
            Self::ME4_B,
            Self::ME4_C,
            Self::ME4_D,
        ]
    }

    fn inner_value(&self) -> i32 {
        self.0
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for MyEnum4 {
    fn default() -> Self {
        Self(0)
    }
}

impl<'a> ::std::convert::From<&'a MyEnum4> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyEnum4) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyEnum4> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyEnum4) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyEnum4 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyEnum4 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME4_D", -2147483648),
            ("ME4_A", 2147483645),
            ("ME4_B", 2147483646),
            ("ME4_C", 2147483647),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyEnum4 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyEnum4::{}", self)
    }
}

impl ::std::str::FromStr for MyEnum4 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ME4_A", 2147483645),
            ("ME4_B", 2147483646),
            ("ME4_C", 2147483647),
            ("ME4_D", -2147483648),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyEnum4").map(Self)
    }
}

impl ::fbthrift::GetTType for MyEnum4 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl ::fbthrift::GetUri for self::MyEnum4 {
    fn uri() -> &'static ::std::primitive::str {
        "test.dev/fixtures/enums/MyEnum4"
    }
}

impl<P> ::fbthrift::Serialize<P> for MyEnum4
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyEnum4
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(Self::from(::anyhow::Context::context(p.read_i32(), "Expected a number indicating enum variant")?))
    }
}
#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyBitmaskEnum1(pub ::std::primitive::i32);

impl MyBitmaskEnum1 {
    pub const ONE: Self = MyBitmaskEnum1(1i32);
    pub const TWO: Self = MyBitmaskEnum1(2i32);
    pub const FOUR: Self = MyBitmaskEnum1(4i32);
}

impl ::fbthrift::ThriftEnum for MyBitmaskEnum1 {
    fn enumerate() -> &'static [(Self, &'static ::std::primitive::str)] {
        &[
            (Self::ONE, "ONE"),
            (Self::TWO, "TWO"),
            (Self::FOUR, "FOUR"),
        ]
    }

    fn variants() -> &'static [&'static ::std::primitive::str] {
        &[
            "ONE",
            "TWO",
            "FOUR",
        ]
    }

    fn variant_values() -> &'static [Self] {
        &[
            Self::ONE,
            Self::TWO,
            Self::FOUR,
        ]
    }

    fn inner_value(&self) -> i32 {
        self.0
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for MyBitmaskEnum1 {
    fn default() -> Self {
        Self(0)
    }
}

impl<'a> ::std::convert::From<&'a MyBitmaskEnum1> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyBitmaskEnum1) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyBitmaskEnum1> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyBitmaskEnum1) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyBitmaskEnum1 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyBitmaskEnum1 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ONE", 1),
            ("TWO", 2),
            ("FOUR", 4),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyBitmaskEnum1 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyBitmaskEnum1::{}", self)
    }
}

impl ::std::str::FromStr for MyBitmaskEnum1 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("FOUR", 4),
            ("ONE", 1),
            ("TWO", 2),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyBitmaskEnum1").map(Self)
    }
}

impl ::fbthrift::GetTType for MyBitmaskEnum1 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl ::fbthrift::GetUri for self::MyBitmaskEnum1 {
    fn uri() -> &'static ::std::primitive::str {
        "test.dev/fixtures/enums/MyBitmaskEnum1"
    }
}

impl<P> ::fbthrift::Serialize<P> for MyBitmaskEnum1
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyBitmaskEnum1
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(Self::from(::anyhow::Context::context(p.read_i32(), "Expected a number indicating enum variant")?))
    }
}
#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyBitmaskEnum2(pub ::std::primitive::i32);

impl MyBitmaskEnum2 {
    pub const ONE: Self = MyBitmaskEnum2(1i32);
    pub const TWO: Self = MyBitmaskEnum2(2i32);
    pub const FOUR: Self = MyBitmaskEnum2(4i32);
}

impl ::fbthrift::ThriftEnum for MyBitmaskEnum2 {
    fn enumerate() -> &'static [(Self, &'static ::std::primitive::str)] {
        &[
            (Self::ONE, "ONE"),
            (Self::TWO, "TWO"),
            (Self::FOUR, "FOUR"),
        ]
    }

    fn variants() -> &'static [&'static ::std::primitive::str] {
        &[
            "ONE",
            "TWO",
            "FOUR",
        ]
    }

    fn variant_values() -> &'static [Self] {
        &[
            Self::ONE,
            Self::TWO,
            Self::FOUR,
        ]
    }

    fn inner_value(&self) -> i32 {
        self.0
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for MyBitmaskEnum2 {
    fn default() -> Self {
        Self(0)
    }
}

impl<'a> ::std::convert::From<&'a MyBitmaskEnum2> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyBitmaskEnum2) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyBitmaskEnum2> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyBitmaskEnum2) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyBitmaskEnum2 {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyBitmaskEnum2 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("ONE", 1),
            ("TWO", 2),
            ("FOUR", 4),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyBitmaskEnum2 {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyBitmaskEnum2::{}", self)
    }
}

impl ::std::str::FromStr for MyBitmaskEnum2 {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("FOUR", 4),
            ("ONE", 1),
            ("TWO", 2),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyBitmaskEnum2").map(Self)
    }
}

impl ::fbthrift::GetTType for MyBitmaskEnum2 {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl ::fbthrift::GetUri for self::MyBitmaskEnum2 {
    fn uri() -> &'static ::std::primitive::str {
        "test.dev/fixtures/enums/MyBitmaskEnum2"
    }
}

impl<P> ::fbthrift::Serialize<P> for MyBitmaskEnum2
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyBitmaskEnum2
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(Self::from(::anyhow::Context::context(p.read_i32(), "Expected a number indicating enum variant")?))
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::SomeStruct {
    fn default() -> Self {
        Self {
            reasonable: crate::types::Metasyntactic::FOO,
            fine: crate::types::Metasyntactic::BAR,
            questionable: crate::types::Metasyntactic(-1),
            tags: ::std::collections::BTreeSet::new(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::SomeStruct {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("SomeStruct")
            .field("reasonable", &self.reasonable)
            .field("fine", &self.fine)
            .field("questionable", &self.questionable)
            .field("tags", &self.tags)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::SomeStruct {}
unsafe impl ::std::marker::Sync for self::SomeStruct {}
impl ::std::marker::Unpin for self::SomeStruct {}
impl ::std::panic::RefUnwindSafe for self::SomeStruct {}
impl ::std::panic::UnwindSafe for self::SomeStruct {}

impl ::fbthrift::GetTType for self::SomeStruct {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetUri for self::SomeStruct {
    fn uri() -> &'static ::std::primitive::str {
        "test.dev/fixtures/enums/SomeStruct"
    }
}

impl ::fbthrift::GetTypeNameType for self::SomeStruct {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::StructType
    }
}

impl<P> ::fbthrift::Serialize<P> for self::SomeStruct
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("SomeStruct");
        p.write_field_begin("reasonable", ::fbthrift::TType::I32, 1);
        ::fbthrift::Serialize::write(&self.reasonable, p);
        p.write_field_end();
        p.write_field_begin("fine", ::fbthrift::TType::I32, 2);
        ::fbthrift::Serialize::write(&self.fine, p);
        p.write_field_end();
        p.write_field_begin("questionable", ::fbthrift::TType::I32, 3);
        ::fbthrift::Serialize::write(&self.questionable, p);
        p.write_field_end();
        p.write_field_begin("tags", ::fbthrift::TType::Set, 4);
        ::fbthrift::Serialize::write(&self.tags, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::SomeStruct
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("fine", ::fbthrift::TType::I32, 2),
            ::fbthrift::Field::new("questionable", ::fbthrift::TType::I32, 3),
            ::fbthrift::Field::new("reasonable", ::fbthrift::TType::I32, 1),
            ::fbthrift::Field::new("tags", ::fbthrift::TType::Set, 4),
        ];
        let mut field_reasonable = ::std::option::Option::None;
        let mut field_fine = ::std::option::Option::None;
        let mut field_questionable = ::std::option::Option::None;
        let mut field_tags = ::std::option::Option::None;
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a SomeStruct")?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::I32, 1) => field_reasonable = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 2) => field_fine = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 3) => field_questionable = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::Set, 4) => field_tags = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            reasonable: field_reasonable.unwrap_or(crate::types::Metasyntactic::FOO),
            fine: field_fine.unwrap_or(crate::types::Metasyntactic::BAR),
            questionable: field_questionable.unwrap_or_else(|| crate::types::Metasyntactic(-1)),
            tags: field_tags.unwrap_or_else(|| ::std::collections::BTreeSet::new()),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


impl ::fbthrift::metadata::ThriftAnnotations for SomeStruct {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        ::std::option::Option::None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: ::std::primitive::i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            2 => {
            },
            3 => {
            },
            4 => {
            },
            _ => {}
        }

        ::std::option::Option::None
    }
}


#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::MyStruct {
    fn default() -> Self {
        Self {
            me2_3: crate::types::MyEnum2(3),
            me3_n3: crate::types::MyEnum3(-3),
            me1_t1: crate::types::MyEnum1::ME1_1,
            me1_t2: crate::types::MyEnum1::ME1_1,
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::MyStruct {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("MyStruct")
            .field("me2_3", &self.me2_3)
            .field("me3_n3", &self.me3_n3)
            .field("me1_t1", &self.me1_t1)
            .field("me1_t2", &self.me1_t2)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::MyStruct {}
unsafe impl ::std::marker::Sync for self::MyStruct {}
impl ::std::marker::Unpin for self::MyStruct {}
impl ::std::panic::RefUnwindSafe for self::MyStruct {}
impl ::std::panic::UnwindSafe for self::MyStruct {}

impl ::fbthrift::GetTType for self::MyStruct {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetUri for self::MyStruct {
    fn uri() -> &'static ::std::primitive::str {
        "test.dev/fixtures/enums/MyStruct"
    }
}

impl ::fbthrift::GetTypeNameType for self::MyStruct {
    fn type_name_type() -> fbthrift::TypeNameType {
        ::fbthrift::TypeNameType::StructType
    }
}

impl<P> ::fbthrift::Serialize<P> for self::MyStruct
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("MyStruct");
        p.write_field_begin("me2_3", ::fbthrift::TType::I32, 1);
        ::fbthrift::Serialize::write(&self.me2_3, p);
        p.write_field_end();
        p.write_field_begin("me3_n3", ::fbthrift::TType::I32, 2);
        ::fbthrift::Serialize::write(&self.me3_n3, p);
        p.write_field_end();
        p.write_field_begin("me1_t1", ::fbthrift::TType::I32, 4);
        ::fbthrift::Serialize::write(&self.me1_t1, p);
        p.write_field_end();
        p.write_field_begin("me1_t2", ::fbthrift::TType::I32, 6);
        ::fbthrift::Serialize::write(&self.me1_t2, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::MyStruct
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("me1_t1", ::fbthrift::TType::I32, 4),
            ::fbthrift::Field::new("me1_t2", ::fbthrift::TType::I32, 6),
            ::fbthrift::Field::new("me2_3", ::fbthrift::TType::I32, 1),
            ::fbthrift::Field::new("me3_n3", ::fbthrift::TType::I32, 2),
        ];
        let mut field_me2_3 = ::std::option::Option::None;
        let mut field_me3_n3 = ::std::option::Option::None;
        let mut field_me1_t1 = ::std::option::Option::None;
        let mut field_me1_t2 = ::std::option::Option::None;
        let _ = ::anyhow::Context::context(p.read_struct_begin(|_| ()), "Expected a MyStruct")?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::I32, 1) => field_me2_3 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 2) => field_me3_n3 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 4) => field_me1_t1 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 6) => field_me1_t2 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            me2_3: field_me2_3.unwrap_or_else(|| crate::types::MyEnum2(3)),
            me3_n3: field_me3_n3.unwrap_or_else(|| crate::types::MyEnum3(-3)),
            me1_t1: field_me1_t1.unwrap_or(crate::types::MyEnum1::ME1_1),
            me1_t2: field_me1_t2.unwrap_or(crate::types::MyEnum1::ME1_1),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


impl ::fbthrift::metadata::ThriftAnnotations for MyStruct {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        ::std::option::Option::None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: ::std::primitive::i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            2 => {
            },
            4 => {
            },
            6 => {
            },
            _ => {}
        }

        ::std::option::Option::None
    }
}



mod dot_dot {
    #[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct OtherFields(pub(crate) ());

    #[allow(dead_code)] // if serde isn't being used
    pub(super) fn default_for_serde_deserialize() -> OtherFields {
        OtherFields(())
    }
}

pub(crate) mod r#impl {
    use ::ref_cast::RefCast;

    #[derive(RefCast)]
    #[repr(transparent)]
    pub(crate) struct LocalImpl<T>(T);

    #[allow(unused)]
    pub(crate) fn write<T, P>(value: &T, p: &mut P)
    where
        LocalImpl<T>: ::fbthrift::Serialize<P>,
        P: ::fbthrift::ProtocolWriter,
    {
        ::fbthrift::Serialize::write(LocalImpl::ref_cast(value), p);
    }

    #[allow(unused)]
    pub(crate) fn read<T, P>(p: &mut P) -> ::anyhow::Result<T>
    where
        LocalImpl<T>: ::fbthrift::Deserialize<P>,
        P: ::fbthrift::ProtocolReader,
    {
        let value: LocalImpl<T> = ::fbthrift::Deserialize::read(p)?;
        ::std::result::Result::Ok(value.0)
    }
}


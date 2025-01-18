/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-enum/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct myEnum;
struct myBigEnum;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_myEnum
#define APACHE_THRIFT_ACCESSOR_myEnum
APACHE_THRIFT_DEFINE_ACCESSOR(myEnum);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myBigEnum
#define APACHE_THRIFT_ACCESSOR_myBigEnum
APACHE_THRIFT_DEFINE_ACCESSOR(myBigEnum);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace test::fixtures::enumstrict {

/** Glean {"file": "thrift/compiler/test/fixtures/basic-enum/src/module.thrift", "name": "EmptyEnum", "kind": "enum" } */
enum class EmptyEnum {
};



/** Glean {"file": "thrift/compiler/test/fixtures/basic-enum/src/module.thrift", "name": "MyEnum", "kind": "enum" } */
enum class MyEnum {
  ONE = 1,
  TWO = 2,
};



/** Glean {"file": "thrift/compiler/test/fixtures/basic-enum/src/module.thrift", "name": "MyUseIntrinsicDefaultEnum", "kind": "enum" } */
enum class MyUseIntrinsicDefaultEnum {
  ZERO = 0,
  ONE = 1,
  TWO = 2,
};



/** Glean {"file": "thrift/compiler/test/fixtures/basic-enum/src/module.thrift", "name": "MyBigEnum", "kind": "enum" } */
enum class MyBigEnum {
  UNKNOWN = 0,
  ONE = 1,
  TWO = 2,
  THREE = 3,
  FOUR = 4,
  FIVE = 5,
  SIX = 6,
  SEVEN = 7,
  EIGHT = 8,
  NINE = 9,
  TEN = 10,
  ELEVEN = 11,
  TWELVE = 12,
  THIRTEEN = 13,
  FOURTEEN = 14,
  FIFTEEN = 15,
  SIXTEEN = 16,
  SEVENTEEN = 17,
  EIGHTEEN = 18,
  NINETEEN = 19,
};



} // namespace test::fixtures::enumstrict

namespace std {
template<> struct hash<::test::fixtures::enumstrict::EmptyEnum> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enumstrict::EmptyEnum> {};
template<> struct hash<::test::fixtures::enumstrict::MyEnum> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enumstrict::MyEnum> {};
template<> struct hash<::test::fixtures::enumstrict::MyUseIntrinsicDefaultEnum> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enumstrict::MyUseIntrinsicDefaultEnum> {};
template<> struct hash<::test::fixtures::enumstrict::MyBigEnum> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::enumstrict::MyBigEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::test::fixtures::enumstrict::EmptyEnum>;

template <> struct TEnumTraits<::test::fixtures::enumstrict::EmptyEnum> {
  using type = ::test::fixtures::enumstrict::EmptyEnum;

  static constexpr std::size_t const size = 0;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;
  static const std::string_view __fbthrift_module_name_internal_do_not_use;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  FOLLY_ERASE static std::string_view typeName() noexcept {
    return "EmptyEnum";
  }

  FOLLY_ERASE static constexpr std::string_view moduleName() noexcept {
    return "module";
  }

  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
};


template <> struct TEnumDataStorage<::test::fixtures::enumstrict::MyEnum>;

template <> struct TEnumTraits<::test::fixtures::enumstrict::MyEnum> {
  using type = ::test::fixtures::enumstrict::MyEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;
  static const std::string_view __fbthrift_module_name_internal_do_not_use;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  FOLLY_ERASE static std::string_view typeName() noexcept {
    return "MyEnum";
  }

  FOLLY_ERASE static constexpr std::string_view moduleName() noexcept {
    return "module";
  }

  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::ONE; }
  static constexpr type max() { return type::TWO; }
};


template <> struct TEnumDataStorage<::test::fixtures::enumstrict::MyUseIntrinsicDefaultEnum>;

template <> struct TEnumTraits<::test::fixtures::enumstrict::MyUseIntrinsicDefaultEnum> {
  using type = ::test::fixtures::enumstrict::MyUseIntrinsicDefaultEnum;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;
  static const std::string_view __fbthrift_module_name_internal_do_not_use;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  FOLLY_ERASE static std::string_view typeName() noexcept {
    return "MyUseIntrinsicDefaultEnum";
  }

  FOLLY_ERASE static constexpr std::string_view moduleName() noexcept {
    return "module";
  }

  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::ZERO; }
  static constexpr type max() { return type::TWO; }
};


template <> struct TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum>;

template <> struct TEnumTraits<::test::fixtures::enumstrict::MyBigEnum> {
  using type = ::test::fixtures::enumstrict::MyBigEnum;

  static constexpr std::size_t const size = 20;
  static folly::Range<type const*> const values;
  static folly::Range<std::string_view const*> const names;
  static const std::string_view __fbthrift_module_name_internal_do_not_use;

  static bool findName(type value, std::string_view* out) noexcept;
  static bool findValue(std::string_view name, type* out) noexcept;

  FOLLY_ERASE static std::string_view typeName() noexcept {
    return "MyBigEnum";
  }

  FOLLY_ERASE static constexpr std::string_view moduleName() noexcept {
    return "module";
  }

  static char const* findName(type value) noexcept {
    std::string_view ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::UNKNOWN; }
  static constexpr type max() { return type::NINETEEN; }
};


}} // apache::thrift


// END declare_enums
// BEGIN forward_declare
namespace test::fixtures::enumstrict {
class MyStruct;
} // namespace test::fixtures::enumstrict
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace test::fixtures::enumstrict {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


/** Glean {"file": "thrift/compiler/test/fixtures/basic-enum/src/module.thrift", "name": "MyStruct", "kind": "struct" } */
class MyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static std::string_view __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static std::string_view __fbthrift_get_class_name();
  template <class ...>
  FOLLY_ERASE static constexpr std::string_view __fbthrift_get_module_name() noexcept {
    return "module";
  }
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::myEnum,
    ::apache::thrift::ident::myBigEnum
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::enum_t<::test::fixtures::enumstrict::MyEnum>,
    ::apache::thrift::type::enum_t<::test::fixtures::enumstrict::MyBigEnum>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 2;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = MyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;
  static constexpr bool __fbthrift_cpp2_uses_op_encode =
    false;


 public:

  MyStruct() :
      __fbthrift_field_myEnum(),
      __fbthrift_field_myBigEnum( ::test::fixtures::enumstrict::MyBigEnum::ONE) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, ::test::fixtures::enumstrict::MyEnum myEnum__arg, ::test::fixtures::enumstrict::MyBigEnum myBigEnum__arg);

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;


  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
 private:
  ::test::fixtures::enumstrict::MyEnum __fbthrift_field_myEnum;
 private:
  ::test::fixtures::enumstrict::MyBigEnum __fbthrift_field_myBigEnum;
 private:
  apache::thrift::detail::isset_bitset<2, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const MyStruct&) const;
  bool operator<(const MyStruct&) const;

  /** Glean { "field": "myEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myEnum_ref() const& {
    return {this->__fbthrift_field_myEnum, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "myEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myEnum_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myEnum), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "myEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myEnum_ref() & {
    return {this->__fbthrift_field_myEnum, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "myEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myEnum_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_myEnum), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "myEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myEnum() const& {
    return {this->__fbthrift_field_myEnum, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "myEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myEnum() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myEnum), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "myEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myEnum() & {
    return {this->__fbthrift_field_myEnum, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "myEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myEnum() && {
    return {static_cast<T&&>(this->__fbthrift_field_myEnum), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "myBigEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyBigEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myBigEnum_ref() const& {
    return {this->__fbthrift_field_myBigEnum, __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "myBigEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyBigEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myBigEnum_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myBigEnum), __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "myBigEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyBigEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myBigEnum_ref() & {
    return {this->__fbthrift_field_myBigEnum, __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "myBigEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyBigEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myBigEnum_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_myBigEnum), __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "myBigEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyBigEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myBigEnum() const& {
    return {this->__fbthrift_field_myBigEnum, __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "myBigEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyBigEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myBigEnum() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myBigEnum), __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "myBigEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyBigEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myBigEnum() & {
    return {this->__fbthrift_field_myBigEnum, __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "myBigEnum" } */
  template <typename..., typename T = ::test::fixtures::enumstrict::MyBigEnum>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myBigEnum() && {
    return {static_cast<T&&>(this->__fbthrift_field_myBigEnum), __isset.at(1), __isset.bit(1)};
  }

  /** Glean { "field": "myEnum" } */
  [[deprecated("Use `FOO.myEnum().value();` instead of `FOO.get_myEnum();`")]]
  ::test::fixtures::enumstrict::MyEnum get_myEnum() const;

  /** Glean { "field": "myEnum" } */
  [[deprecated("Use `FOO.myEnum() = BAR;` instead of `FOO.set_myEnum(BAR);`")]]
  ::test::fixtures::enumstrict::MyEnum& set_myEnum(::test::fixtures::enumstrict::MyEnum myEnum_);

  /** Glean { "field": "myBigEnum" } */
  [[deprecated("Use `FOO.myBigEnum().value();` instead of `FOO.get_myBigEnum();`")]]
  ::test::fixtures::enumstrict::MyBigEnum get_myBigEnum() const;

  /** Glean { "field": "myBigEnum" } */
  [[deprecated("Use `FOO.myBigEnum() = BAR;` instead of `FOO.set_myBigEnum(BAR);`")]]
  ::test::fixtures::enumstrict::MyBigEnum& set_myBigEnum(::test::fixtures::enumstrict::MyBigEnum myBigEnum_);

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyStruct>;
  friend void swap(MyStruct& a, MyStruct& b);
};

template <class Protocol_>
unsigned long MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // namespace test::fixtures::enumstrict

/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <thrift/lib/cpp2/type/Tag.h>

#include "thrift/annotation/gen-cpp2/thrift_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct myIntField;
struct myStringField;
struct myEnum;
struct myDataItem;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_myIntField
#define APACHE_THRIFT_ACCESSOR_myIntField
APACHE_THRIFT_DEFINE_ACCESSOR(myIntField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myStringField
#define APACHE_THRIFT_ACCESSOR_myStringField
APACHE_THRIFT_DEFINE_ACCESSOR(myStringField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myEnum
#define APACHE_THRIFT_ACCESSOR_myEnum
APACHE_THRIFT_DEFINE_ACCESSOR(myEnum);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_myDataItem
#define APACHE_THRIFT_ACCESSOR_myDataItem
APACHE_THRIFT_DEFINE_ACCESSOR(myDataItem);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace test { namespace fixtures { namespace basic {

enum class MyEnum {
  MyValue1 = 0,
  MyValue2 = 1,
};




}}} // test::fixtures::basic

namespace std {
template<> struct hash<::test::fixtures::basic::MyEnum> :
  ::apache::thrift::detail::enum_hash<::test::fixtures::basic::MyEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::test::fixtures::basic::MyEnum>;

template <> struct TEnumTraits<::test::fixtures::basic::MyEnum> {
  using type = ::test::fixtures::basic::MyEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static bool findName(type value, folly::StringPiece* out) noexcept;
  static bool findValue(folly::StringPiece name, type* out) noexcept;

#if FOLLY_HAS_STRING_VIEW
  static bool findName(type value, std::string_view* out) noexcept {
    folly::StringPiece outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
#endif
  static char const* findName(type value) noexcept {
    folly::StringPiece ret;
    (void)findName(value, &ret);
    return ret.data();
  }
  static constexpr type min() { return type::MyValue1; }
  static constexpr type max() { return type::MyValue2; }
};


}} // apache::thrift

namespace test { namespace fixtures { namespace basic {

using _MyEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<MyEnum>;
#ifndef ANDROID
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES;
#endif
}}} // test::fixtures::basic

// END declare_enums
// BEGIN forward_declare
namespace test { namespace fixtures { namespace basic {
class MyStruct;
class MyUnion;
}}} // test::fixtures::basic
// END forward_declare
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace test { namespace fixtures { namespace basic {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class MyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static const char* __fbthrift_thrift_uri();
  using __fbthrift_fields = ::apache::thrift::type::fields<
    ::apache::thrift::type::field_t<::apache::thrift::FieldId{1}, ::apache::thrift::type::i64_t>,
    ::apache::thrift::type::field_t<::apache::thrift::FieldId{2}, ::apache::thrift::type::string_t>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 2;

  static constexpr ::apache::thrift::FieldId __fbthrift_field_ids[] = {::apache::thrift::FieldId{1}, ::apache::thrift::FieldId{2}, };

  static constexpr ::apache::thrift::FieldOrdinal __fbthrift_field_id_to_ordinal(::apache::thrift::FieldId id) {
    switch (::folly::to_underlying(id)) {
      case 1: return ::apache::thrift::FieldOrdinal{1};
      case 2: return ::apache::thrift::FieldOrdinal{2};
    }
    return ::apache::thrift::FieldOrdinal{0};
  }

  template<class T>
  using __fbthrift_ident = folly::type_pack_element_t<folly::to_underlying(T::value),
                                                      void,
                                                      ::apache::thrift::tag::myIntField,
                                                      ::apache::thrift::tag::myStringField>;


  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = MyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyStruct() :
      __fbthrift_field_myIntField() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, ::std::int64_t myIntField__arg, ::std::string myStringField__arg);

  MyStruct(MyStruct&&) noexcept;

  MyStruct(const MyStruct& src);


  MyStruct& operator=(MyStruct&&) noexcept;
  MyStruct& operator=(const MyStruct& src);
 private:
  ::std::int64_t __fbthrift_field_myIntField;
 private:
  ::std::string __fbthrift_field_myStringField;
 private:
  apache::thrift::detail::isset_bitset<2, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const MyStruct&) const;
  bool operator<(const MyStruct&) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myIntField_ref() const& {
    return {this->__fbthrift_field_myIntField, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myIntField_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myIntField), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myIntField_ref() & {
    return {this->__fbthrift_field_myIntField, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myIntField_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_myIntField), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myIntField() const& {
    return {this->__fbthrift_field_myIntField, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myIntField() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myIntField), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myIntField() & {
    return {this->__fbthrift_field_myIntField, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myIntField() && {
    return {static_cast<T&&>(this->__fbthrift_field_myIntField), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myStringField_ref() const& {
    return {this->__fbthrift_field_myStringField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myStringField_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myStringField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myStringField_ref() & {
    return {this->__fbthrift_field_myStringField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myStringField_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_myStringField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> myStringField() const& {
    return {this->__fbthrift_field_myStringField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> myStringField() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_myStringField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> myStringField() & {
    return {this->__fbthrift_field_myStringField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> myStringField() && {
    return {static_cast<T&&>(this->__fbthrift_field_myStringField), __isset.at(1), __isset.bit(1)};
  }

  ::std::int64_t get_myIntField() const {
    return __fbthrift_field_myIntField;
  }

  [[deprecated("Use `FOO.myIntField_ref() = BAR;` instead of `FOO.set_myIntField(BAR);`")]]
  ::std::int64_t& set_myIntField(::std::int64_t myIntField_) {
    myIntField_ref() = myIntField_;
    return __fbthrift_field_myIntField;
  }

  const ::std::string& get_myStringField() const& {
    return __fbthrift_field_myStringField;
  }

  ::std::string get_myStringField() && {
    return std::move(__fbthrift_field_myStringField);
  }

  template <typename T_MyStruct_myStringField_struct_setter = ::std::string>
  [[deprecated("Use `FOO.myStringField_ref() = BAR;` instead of `FOO.set_myStringField(BAR);`")]]
  ::std::string& set_myStringField(T_MyStruct_myStringField_struct_setter&& myStringField_) {
    myStringField_ref() = std::forward<T_MyStruct_myStringField_struct_setter>(myStringField_);
    return __fbthrift_field_myStringField;
  }

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


class MyUnion final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static const char* __fbthrift_thrift_uri();
  using __fbthrift_fields = ::apache::thrift::type::fields<
    ::apache::thrift::type::field_t<::apache::thrift::FieldId{1}, ::apache::thrift::type::enum_t<::test::fixtures::basic::MyEnum>>,
    ::apache::thrift::type::field_t<::apache::thrift::FieldId{2}, ::apache::thrift::type::struct_t<::test::fixtures::basic::MyStruct>>
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 2;

  static constexpr ::apache::thrift::FieldId __fbthrift_field_ids[] = {::apache::thrift::FieldId{1}, ::apache::thrift::FieldId{2}, };

  static constexpr ::apache::thrift::FieldOrdinal __fbthrift_field_id_to_ordinal(::apache::thrift::FieldId id) {
    switch (::folly::to_underlying(id)) {
      case 1: return ::apache::thrift::FieldOrdinal{1};
      case 2: return ::apache::thrift::FieldOrdinal{2};
    }
    return ::apache::thrift::FieldOrdinal{0};
  }

  template<class T>
  using __fbthrift_ident = folly::type_pack_element_t<folly::to_underlying(T::value),
                                                      void,
                                                      ::apache::thrift::tag::myEnum,
                                                      ::apache::thrift::tag::myDataItem>;


  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = MyUnion;
  static constexpr bool __fbthrift_cpp2_is_union =
    true;


 public:
  enum Type : int {
    __EMPTY__ = 0,
    myEnum = 1,
    myDataItem = 2,
  } ;

  MyUnion()
      : type_(Type::__EMPTY__) {}

  MyUnion(MyUnion&& rhs) noexcept
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(std::move(rhs.value_.myEnum));
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(std::move(rhs.value_.myDataItem));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    apache::thrift::clear(rhs);
  }

  MyUnion(const MyUnion& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(rhs.value_.myEnum);
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(rhs.value_.myDataItem);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  MyUnion& operator=(MyUnion&& rhs) noexcept {
    if (this == &rhs) { return *this; }
    __fbthrift_clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(std::move(rhs.value_.myEnum));
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(std::move(rhs.value_.myDataItem));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    apache::thrift::clear(rhs);
    return *this;
  }

  MyUnion& operator=(const MyUnion& rhs) {
    if (this == &rhs) { return *this; }
    __fbthrift_clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::myEnum:
      {
        set_myEnum(rhs.value_.myEnum);
        break;
      }
      case Type::myDataItem:
      {
        set_myDataItem(rhs.value_.myDataItem);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }

  ~MyUnion() {
    apache::thrift::clear(*this);
  }

  union storage_type {
    ::test::fixtures::basic::MyEnum myEnum;
    ::test::fixtures::basic::MyStruct myDataItem;

    storage_type() {}
    ~storage_type() {}
  } ;

  bool operator==(const MyUnion&) const;
  bool operator<(const MyUnion&) const;

  ::test::fixtures::basic::MyEnum& set_myEnum(::test::fixtures::basic::MyEnum t = ::test::fixtures::basic::MyEnum()) {
    __fbthrift_clear();
    type_ = Type::myEnum;
    ::new (std::addressof(value_.myEnum)) ::test::fixtures::basic::MyEnum(t);
    return value_.myEnum;
  }

  ::test::fixtures::basic::MyStruct& set_myDataItem(::test::fixtures::basic::MyStruct const &t) {
    __fbthrift_clear();
    type_ = Type::myDataItem;
    ::new (std::addressof(value_.myDataItem)) ::test::fixtures::basic::MyStruct(t);
    return value_.myDataItem;
  }

  ::test::fixtures::basic::MyStruct& set_myDataItem(::test::fixtures::basic::MyStruct&& t) {
    __fbthrift_clear();
    type_ = Type::myDataItem;
    ::new (std::addressof(value_.myDataItem)) ::test::fixtures::basic::MyStruct(std::move(t));
    return value_.myDataItem;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<::test::fixtures::basic::MyStruct, T...>> ::test::fixtures::basic::MyStruct& set_myDataItem(T&&... t) {
    __fbthrift_clear();
    type_ = Type::myDataItem;
    ::new (std::addressof(value_.myDataItem)) ::test::fixtures::basic::MyStruct(std::forward<T>(t)...);
    return value_.myDataItem;
  }

  ::test::fixtures::basic::MyEnum const& get_myEnum() const {
    if (type_ != Type::myEnum) {
      ::apache::thrift::detail::throw_on_bad_field_access();
    }
    return value_.myEnum;
  }

  ::test::fixtures::basic::MyStruct const& get_myDataItem() const {
    if (type_ != Type::myDataItem) {
      ::apache::thrift::detail::throw_on_bad_field_access();
    }
    return value_.myDataItem;
  }

  ::test::fixtures::basic::MyEnum& mutable_myEnum() {
    assert(type_ == Type::myEnum);
    return value_.myEnum;
  }

  ::test::fixtures::basic::MyStruct& mutable_myDataItem() {
    assert(type_ == Type::myDataItem);
    return value_.myDataItem;
  }

  ::test::fixtures::basic::MyEnum move_myEnum() {
    assert(type_ == Type::myEnum);
    return std::move(value_.myEnum);
  }

  ::test::fixtures::basic::MyStruct move_myDataItem() {
    assert(type_ == Type::myDataItem);
    return std::move(value_.myDataItem);
  }

  template <typename..., typename T = ::test::fixtures::basic::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> myEnum_ref() const& {
    return {value_.myEnum, type_, myEnum, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::test::fixtures::basic::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> myEnum_ref() const&& {
    return {std::move(value_.myEnum), type_, myEnum, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::test::fixtures::basic::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> myEnum_ref() & {
    return {value_.myEnum, type_, myEnum, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::test::fixtures::basic::MyEnum>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> myEnum_ref() && {
    return {std::move(value_.myEnum), type_, myEnum, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  template <typename..., typename T = ::test::fixtures::basic::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> myDataItem_ref() const& {
    return {value_.myDataItem, type_, myDataItem, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::test::fixtures::basic::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> myDataItem_ref() const&& {
    return {std::move(value_.myDataItem), type_, myDataItem, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::test::fixtures::basic::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> myDataItem_ref() & {
    return {value_.myDataItem, type_, myDataItem, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::test::fixtures::basic::MyStruct>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> myDataItem_ref() && {
    return {std::move(value_.myDataItem), type_, myDataItem, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  Type getType() const { return static_cast<Type>(type_); }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  storage_type value_;
  std::underlying_type_t<Type> type_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyUnion>;
  friend void swap(MyUnion& a, MyUnion& b);
};

template <class Protocol_>
unsigned long MyUnion::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


}}} // test::fixtures::basic

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::test::fixtures::basic::MyUnion::Type>;

template <> struct TEnumTraits<::test::fixtures::basic::MyUnion::Type> {
  using type = ::test::fixtures::basic::MyUnion::Type;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static bool findName(type value, folly::StringPiece* out) noexcept;
  static bool findValue(folly::StringPiece name, type* out) noexcept;

#if FOLLY_HAS_STRING_VIEW
  static bool findName(type value, std::string_view* out) noexcept {
    folly::StringPiece outp;
    return findName(value, &outp) && ((*out = outp), true);
  }
#endif
  static char const* findName(type value) noexcept {
    folly::StringPiece ret;
    (void)findName(value, &ret);
    return ret.data();
  }
};
}} // apache::thrift

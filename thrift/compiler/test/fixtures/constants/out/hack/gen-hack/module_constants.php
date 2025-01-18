<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

class module_CONSTANTS implements \IThriftConstants {
  /**
   * Original thrift constant:-
   * i32 myInt
   */
  const int myInt = 1337;

  /**
   * Original thrift constant:-
   * string name
   */
  const string name = "Mark Zuckerberg";

  /**
   * Original thrift constant:-
   * string multi_line_string
   */
  const string multi_line_string = "This\nis a\nmulti line string.\n";

  /**
   * Original thrift constant:-
   * list<map<string, i32>> states
   */
  <<__Memoize>>
  public static function states()[write_props]: \ConstVector<\ConstMap<string, int>>{
    return ImmVector {
      ImmMap {
        "San Diego" => 3211000,
        "Sacramento" => 479600,
        "SF" => 837400,
      },
      ImmMap {
        "New York" => 8406000,
        "Albany" => 98400,
      },
    };
  }

  /**
   * Original thrift constant:-
   * double x
   */
  const float x = 1.0;

  /**
   * Original thrift constant:-
   * double y
   */
  const float y = 1000000.0;

  /**
   * Original thrift constant:-
   * double z
   */
  const float z = 1e+09;

  /**
   * Original thrift constant:-
   * double zeroDoubleValue
   */
  const float zeroDoubleValue = 0.0;

  /**
   * Original thrift constant:-
   * double longDoubleValue
   */
  const float longDoubleValue = 2.59961e-05;

  /**
   * Original thrift constant:-
   * binary bin
   */
  const string bin = "a\000z";

  /**
   * Original thrift constant:-
   * module.MyCompany my_company
   */
  const MyCompany my_company = Company::FACEBOOK;

  /**
   * Original thrift constant:-
   * module.MyStringIdentifier foo
   */
  const MyStringIdentifier foo = "foo";

  /**
   * Original thrift constant:-
   * module.MyIntIdentifier bar
   */
  const MyIntIdentifier bar = 42;

  /**
   * Original thrift constant:-
   * module.MyMapIdentifier mymap
   */
  <<__Memoize>>
  public static function mymap()[write_props]: MyMapIdentifier{
    return ImmMap {
      "keys" => "values",
    };
  }

  /**
   * Original thrift constant:-
   * list<module.Company> my_apps
   */
  <<__Memoize>>
  public static function my_apps()[write_props]: \ConstVector<Company>{
    return ImmVector {
      Company::FACEBOOK,
      Company::__FRIEND__FEED,
    };
  }

  /**
   * Original thrift constant:-
   * module.Internship instagram
   */
  <<__Memoize>>
  public static function instagram()[write_props]: Internship{
    return Internship::fromShape(
      shape(
        "weeks" => 12,
        "title" => "Software Engineer",
        "employer" => Company::INSTAGRAM,
        "compensation" => 1200.0,
        "school" => "Monters University",
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.Internship partial_const
   */
  <<__Memoize>>
  public static function partial_const()[write_props]: Internship{
    return Internship::fromShape(
      shape(
        "weeks" => 8,
        "title" => "Some Job",
      )
    );
  }

  /**
   * Original thrift constant:-
   * list<module.Range> kRanges
   */
  <<__Memoize>>
  public static function kRanges()[write_props]: \ConstVector<Range>{
    return ImmVector {
      Range::fromShape(
        shape(
          "min" => 1,
          "max" => 2,
        )
      ),
      Range::fromShape(
        shape(
          "min" => 5,
          "max" => 6,
        )
      ),
    };
  }

  /**
   * Original thrift constant:-
   * list<module.Internship> internList
   */
  <<__Memoize>>
  public static function internList()[write_props]: \ConstVector<Internship>{
    return ImmVector {
      Internship::fromShape(
        shape(
          "weeks" => 12,
          "title" => "Software Engineer",
          "employer" => Company::INSTAGRAM,
          "compensation" => 1200.0,
          "school" => "Monters University",
        )
      ),
      Internship::fromShape(
        shape(
          "weeks" => 10,
          "title" => "Sales Intern",
          "employer" => Company::FACEBOOK,
          "compensation" => 1000.0,
        )
      ),
    };
  }

  /**
   * Original thrift constant:-
   * module.struct1 pod_0
   */
  <<__Memoize>>
  public static function pod_0()[write_props]: struct1{
    return struct1::fromShape(
      shape(
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.struct1 pod_s_0
   */
  <<__Memoize>>
  public static function pod_s_0()[write_props]: struct1{
    return struct1::fromShape(
      shape(
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.struct1 pod_1
   */
  <<__Memoize>>
  public static function pod_1()[write_props]: struct1{
    return struct1::fromShape(
      shape(
        "a" => 10,
        "b" => "foo",
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.struct1 pod_s_1
   */
  <<__Memoize>>
  public static function pod_s_1()[write_props]: struct1{
    return struct1::fromShape(
      shape(
        "a" => 10,
        "b" => "foo",
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.struct2 pod_2
   */
  <<__Memoize>>
  public static function pod_2()[write_props]: struct2{
    return struct2::fromShape(
      shape(
        "a" => 98,
        "b" => "gaz",
        "c" => struct1::fromShape(
          shape(
            "a" => 12,
            "b" => "bar",
          )
        ),
        "d" => Vector {
          11,
          22,
          33,
        },
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.struct2 pod_trailing_commas
   */
  <<__Memoize>>
  public static function pod_trailing_commas()[write_props]: struct2{
    return struct2::fromShape(
      shape(
        "a" => 98,
        "b" => "gaz",
        "c" => struct1::fromShape(
          shape(
            "a" => 12,
            "b" => "bar",
          )
        ),
        "d" => Vector {
          11,
          22,
          33,
        },
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.struct2 pod_s_2
   */
  <<__Memoize>>
  public static function pod_s_2()[write_props]: struct2{
    return struct2::fromShape(
      shape(
        "a" => 98,
        "b" => "gaz",
        "c" => struct1::fromShape(
          shape(
            "a" => 12,
            "b" => "bar",
          )
        ),
        "d" => Vector {
          11,
          22,
          33,
        },
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.struct3 pod_3
   */
  <<__Memoize>>
  public static function pod_3()[write_props]: struct3{
    return struct3::fromShape(
      shape(
        "a" => "abc",
        "b" => 456,
        "c" => struct2::fromShape(
          shape(
            "a" => 888,
            "c" => struct1::fromShape(
              shape(
                "b" => "gaz",
              )
            ),
            "d" => Vector {
              1,
              2,
              3,
            },
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.struct3 pod_s_3
   */
  <<__Memoize>>
  public static function pod_s_3()[write_props]: struct3{
    return struct3::fromShape(
      shape(
        "a" => "abc",
        "b" => 456,
        "c" => struct2::fromShape(
          shape(
            "a" => 888,
            "c" => struct1::fromShape(
              shape(
                "b" => "gaz",
              )
            ),
            "d" => Vector {
              1,
              2,
              3,
            },
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.struct4 pod_4
   */
  <<__Memoize>>
  public static function pod_4()[write_props]: struct4{
    return struct4::fromShape(
      shape(
        "a" => 1234,
        "b" => 0.333,
        "c" => 25,
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.union1 u_1_1
   */
  <<__Memoize>>
  public static function u_1_1()[write_props]: union1{
    return union1::fromShape(
      shape(
        "i" => 97,
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.union1 u_1_2
   */
  <<__Memoize>>
  public static function u_1_2()[write_props]: union1{
    return union1::fromShape(
      shape(
        "d" => 5.6,
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.union1 u_1_3
   */
  <<__Memoize>>
  public static function u_1_3()[write_props]: union1{
    return union1::fromShape(
      shape(
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.union2 u_2_1
   */
  <<__Memoize>>
  public static function u_2_1()[write_props]: union2{
    return union2::fromShape(
      shape(
        "i" => 51,
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.union2 u_2_2
   */
  <<__Memoize>>
  public static function u_2_2()[write_props]: union2{
    return union2::fromShape(
      shape(
        "d" => 6.7,
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.union2 u_2_3
   */
  <<__Memoize>>
  public static function u_2_3()[write_props]: union2{
    return union2::fromShape(
      shape(
        "s" => struct1::fromShape(
          shape(
            "a" => 8,
            "b" => "abacabb",
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.union2 u_2_4
   */
  <<__Memoize>>
  public static function u_2_4()[write_props]: union2{
    return union2::fromShape(
      shape(
        "u" => union1::fromShape(
          shape(
            "i" => 43,
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.union2 u_2_5
   */
  <<__Memoize>>
  public static function u_2_5()[write_props]: union2{
    return union2::fromShape(
      shape(
        "u" => union1::fromShape(
          shape(
            "d" => 9.8,
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * module.union2 u_2_6
   */
  <<__Memoize>>
  public static function u_2_6()[write_props]: union2{
    return union2::fromShape(
      shape(
        "u" => union1::fromShape(
          shape(
          )
        ),
      )
    );
  }

  /**
   * Original thrift constant:-
   * string apostrophe
   */
  const string apostrophe = "'";

  /**
   * Original thrift constant:-
   * string tripleApostrophe
   */
  const string tripleApostrophe = "'''";

  /**
   * Original thrift constant:-
   * string quotationMark
   */
  const string quotationMark = "\"";

  /**
   * Original thrift constant:-
   * string backslash
   */
  const string backslash = "\\";

  /**
   * Original thrift constant:-
   * string escaped_a
   */
  const string escaped_a = "a";

  /**
   * Original thrift constant:-
   * map<string, i32> char2ascii
   */
  <<__Memoize>>
  public static function char2ascii()[write_props]: \ConstMap<string, int>{
    return ImmMap {
      "'" => 39,
      "\"" => 34,
      "\\" => 92,
      "a" => 97,
    };
  }

  /**
   * Original thrift constant:-
   * list<string> escaped_strings
   */
  <<__Memoize>>
  public static function escaped_strings()[write_props]: \ConstVector<string>{
    return ImmVector {
      "\001",
      "\037",
      " ",
      "'",
      "\"",
      "\n",
      "\r",
      "\011",
      "a",
      "\302\253",
      "j",
      "\302\246",
      "ayyy",
      "\302\253yyy",
      "jyyy",
      "\302\246yyy",
      "zzza",
      "zzz\302\253",
      "zzzj",
      "zzz\302\246",
      "zzzayyy",
      "zzz\302\253yyy",
      "zzzjyyy",
      "zzz\302\246yyy",
    };
  }

  /**
   * Original thrift constant:-
   * list<string> unicode_list
   */
  <<__Memoize>>
  public static function unicode_list()[write_props]: \ConstVector<string>{
    return ImmVector {
      "Bulgaria",
      "Benin",
      "Saint Barth\303\251lemy",
    };
  }

  /**
   * Original thrift constant:-
   * bool false_c
   */
  const bool false_c = false;

  /**
   * Original thrift constant:-
   * bool true_c
   */
  const bool true_c = true;

  /**
   * Original thrift constant:-
   * byte zero_byte
   */
  const int zero_byte = 0;

  /**
   * Original thrift constant:-
   * i16 zero16
   */
  const int zero16 = 0;

  /**
   * Original thrift constant:-
   * i32 zero32
   */
  const int zero32 = 0;

  /**
   * Original thrift constant:-
   * i64 zero64
   */
  const int zero64 = 0;

  /**
   * Original thrift constant:-
   * double zero_dot_zero
   */
  const float zero_dot_zero = 0.0;

  /**
   * Original thrift constant:-
   * string empty_string
   */
  const string empty_string = "";

  /**
   * Original thrift constant:-
   * list<i32> empty_int_list
   */
  <<__Memoize>>
  public static function empty_int_list()[write_props]: \ConstVector<int>{
    return ImmVector {
    };
  }

  /**
   * Original thrift constant:-
   * list<string> empty_string_list
   */
  <<__Memoize>>
  public static function empty_string_list()[write_props]: \ConstVector<string>{
    return ImmVector {
    };
  }

  /**
   * Original thrift constant:-
   * set<i32> empty_int_set
   */
  <<__Memoize>>
  public static function empty_int_set()[write_props]: \ConstSet<int>{
    return ImmSet {
    };
  }

  /**
   * Original thrift constant:-
   * set<string> empty_string_set
   */
  <<__Memoize>>
  public static function empty_string_set()[write_props]: \ConstSet<string>{
    return ImmSet {
    };
  }

  /**
   * Original thrift constant:-
   * map<i32, i32> empty_int_int_map
   */
  <<__Memoize>>
  public static function empty_int_int_map()[write_props]: \ConstMap<int, int>{
    return ImmMap {
    };
  }

  /**
   * Original thrift constant:-
   * map<i32, string> empty_int_string_map
   */
  <<__Memoize>>
  public static function empty_int_string_map()[write_props]: \ConstMap<int, string>{
    return ImmMap {
    };
  }

  /**
   * Original thrift constant:-
   * map<string, i32> empty_string_int_map
   */
  <<__Memoize>>
  public static function empty_string_int_map()[write_props]: \ConstMap<string, int>{
    return ImmMap {
    };
  }

  /**
   * Original thrift constant:-
   * map<string, string> empty_string_string_map
   */
  <<__Memoize>>
  public static function empty_string_string_map()[write_props]: \ConstMap<string, string>{
    return ImmMap {
    };
  }

  /**
   * Original thrift constant:-
   * map<string, string> unicode_map
   */
  <<__Memoize>>
  public static function unicode_map()[write_props]: \ConstMap<string, string>{
    return ImmMap {
      "BG" => "Bulgaria",
      "BH" => "Bahrain",
      "B\303\211" => "Saint Barth\303\251lemy",
    };
  }

  /**
   * Original thrift constant:-
   * i64 maxIntDec
   */
  const int maxIntDec = 9223372036854775807;

  /**
   * Original thrift constant:-
   * i64 maxIntOct
   */
  const int maxIntOct = 9223372036854775807;

  /**
   * Original thrift constant:-
   * i64 maxIntHex
   */
  const int maxIntHex = 9223372036854775807;

  /**
   * Original thrift constant:-
   * i64 maxIntBin
   */
  const int maxIntBin = 9223372036854775807;

  /**
   * Original thrift constant:-
   * double maxDub
   */
  const float maxDub = 1.79769e+308;

  /**
   * Original thrift constant:-
   * double minDub
   */
  const float minDub = 2.22507e-308;

  /**
   * Original thrift constant:-
   * double minSDub
   */
  const float minSDub = 4.94066e-324;

  /**
   * Original thrift constant:-
   * i64 maxPIntDec
   */
  const int maxPIntDec = 9223372036854775807;

  /**
   * Original thrift constant:-
   * i64 maxPIntOct
   */
  const int maxPIntOct = 9223372036854775807;

  /**
   * Original thrift constant:-
   * i64 maxPIntHex
   */
  const int maxPIntHex = 9223372036854775807;

  /**
   * Original thrift constant:-
   * i64 maxPIntBin
   */
  const int maxPIntBin = 9223372036854775807;

  /**
   * Original thrift constant:-
   * double maxPDub
   */
  const float maxPDub = 1.79769e+308;

  /**
   * Original thrift constant:-
   * double minPDub
   */
  const float minPDub = 2.22507e-308;

  /**
   * Original thrift constant:-
   * double minPSDub
   */
  const float minPSDub = 4.94066e-324;

  /**
   * Original thrift constant:-
   * i64 minIntDec
   */
  const int minIntDec = -9223372036854775808;

  /**
   * Original thrift constant:-
   * i64 minIntOct
   */
  const int minIntOct = -9223372036854775808;

  /**
   * Original thrift constant:-
   * i64 minIntHex
   */
  const int minIntHex = -9223372036854775808;

  /**
   * Original thrift constant:-
   * i64 minIntBin
   */
  const int minIntBin = -9223372036854775808;

  /**
   * Original thrift constant:-
   * double maxNDub
   */
  const float maxNDub = -1.79769e+308;

  /**
   * Original thrift constant:-
   * double minNDub
   */
  const float minNDub = -2.22507e-308;

  /**
   * Original thrift constant:-
   * double minNSDub
   */
  const float minNSDub = -4.94066e-324;

  /**
   * Original thrift constant:-
   * map<i32, bool> I2B
   */
  <<__Memoize>>
  public static function I2B()[write_props]: \ConstMap<int, bool>{
    return ImmMap {
      0 => false,
      1 => true,
      2 => true,
      3 => false,
    };
  }

  /**
   * Original thrift constant:-
   * map<i32, bool> I2B_REF
   */
  <<__Memoize>>
  public static function I2B_REF()[write_props]: \ConstMap<int, bool>{
    return ImmMap {
      0 => false,
      1 => true,
      2 => true,
      3 => false,
    };
  }


  public static function getAllStructuredAnnotations()[write_props]: dict<string, dict<string, \IThriftStruct>> {
    return dict[
    ];
  }
}


/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.refs;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="MyField", builder=MyField.Builder.class)
public final class MyField implements com.facebook.thrift.payload.ThriftSerializable {
    @ThriftConstructor
    public MyField(
        @com.facebook.swift.codec.ThriftField(value=1, name="opt_value", requiredness=Requiredness.OPTIONAL) final Long optValue,
        @com.facebook.swift.codec.ThriftField(value=2, name="value", requiredness=Requiredness.NONE) final long value,
        @com.facebook.swift.codec.ThriftField(value=3, name="req_value", requiredness=Requiredness.REQUIRED) final long reqValue,
        @com.facebook.swift.codec.ThriftField(value=4, name="opt_enum_value", requiredness=Requiredness.OPTIONAL) final test.fixtures.refs.MyEnum optEnumValue,
        @com.facebook.swift.codec.ThriftField(value=5, name="enum_value", requiredness=Requiredness.NONE) final test.fixtures.refs.MyEnum enumValue,
        @com.facebook.swift.codec.ThriftField(value=6, name="req_enum_value", requiredness=Requiredness.REQUIRED) final test.fixtures.refs.MyEnum reqEnumValue,
        @com.facebook.swift.codec.ThriftField(value=7, name="opt_str_value", requiredness=Requiredness.OPTIONAL) final String optStrValue,
        @com.facebook.swift.codec.ThriftField(value=8, name="str_value", requiredness=Requiredness.NONE) final String strValue,
        @com.facebook.swift.codec.ThriftField(value=9, name="req_str_value", requiredness=Requiredness.REQUIRED) final String reqStrValue
    ) {
        this.optValue = optValue;
        this.value = value;
        this.reqValue = reqValue;
        this.optEnumValue = optEnumValue;
        this.enumValue = enumValue;
        this.reqEnumValue = reqEnumValue;
        this.optStrValue = optStrValue;
        this.strValue = strValue;
        this.reqStrValue = reqStrValue;
    }
    
    @ThriftConstructor
    protected MyField() {
      this.optValue = null;
      this.value = 0L;
      this.reqValue = 0L;
      this.optEnumValue = null;
      this.enumValue = test.fixtures.refs.MyEnum.fromInteger(0);
      this.reqEnumValue = test.fixtures.refs.MyEnum.fromInteger(0);
      this.optStrValue = null;
      this.strValue = null;
      this.reqStrValue = null;
    }

    public static Builder builder() {
      return new Builder();
    }

    public static Builder builder(MyField other) {
      return new Builder(other);
    }

    public static class Builder {
        private Long optValue = null;
        private long value = 0L;
        private long reqValue = 0L;
        private test.fixtures.refs.MyEnum optEnumValue = null;
        private test.fixtures.refs.MyEnum enumValue = test.fixtures.refs.MyEnum.fromInteger(0);
        private test.fixtures.refs.MyEnum reqEnumValue = test.fixtures.refs.MyEnum.fromInteger(0);
        private String optStrValue = null;
        private String strValue = null;
        private String reqStrValue = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="opt_value", requiredness=Requiredness.OPTIONAL)    public Builder setOptValue(Long optValue) {
            this.optValue = optValue;
            return this;
        }
    
        public Long getOptValue() { return optValue; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="value", requiredness=Requiredness.NONE)    public Builder setValue(long value) {
            this.value = value;
            return this;
        }
    
        public long getValue() { return value; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="req_value", requiredness=Requiredness.REQUIRED)    public Builder setReqValue(long reqValue) {
            this.reqValue = reqValue;
            return this;
        }
    
        public long getReqValue() { return reqValue; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="opt_enum_value", requiredness=Requiredness.OPTIONAL)    public Builder setOptEnumValue(test.fixtures.refs.MyEnum optEnumValue) {
            this.optEnumValue = optEnumValue;
            return this;
        }
    
        public test.fixtures.refs.MyEnum getOptEnumValue() { return optEnumValue; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="enum_value", requiredness=Requiredness.NONE)    public Builder setEnumValue(test.fixtures.refs.MyEnum enumValue) {
            this.enumValue = enumValue;
            return this;
        }
    
        public test.fixtures.refs.MyEnum getEnumValue() { return enumValue; }
    
            @com.facebook.swift.codec.ThriftField(value=6, name="req_enum_value", requiredness=Requiredness.REQUIRED)    public Builder setReqEnumValue(test.fixtures.refs.MyEnum reqEnumValue) {
            this.reqEnumValue = reqEnumValue;
            return this;
        }
    
        public test.fixtures.refs.MyEnum getReqEnumValue() { return reqEnumValue; }
    
            @com.facebook.swift.codec.ThriftField(value=7, name="opt_str_value", requiredness=Requiredness.OPTIONAL)    public Builder setOptStrValue(String optStrValue) {
            this.optStrValue = optStrValue;
            return this;
        }
    
        public String getOptStrValue() { return optStrValue; }
    
            @com.facebook.swift.codec.ThriftField(value=8, name="str_value", requiredness=Requiredness.NONE)    public Builder setStrValue(String strValue) {
            this.strValue = strValue;
            return this;
        }
    
        public String getStrValue() { return strValue; }
    
            @com.facebook.swift.codec.ThriftField(value=9, name="req_str_value", requiredness=Requiredness.REQUIRED)    public Builder setReqStrValue(String reqStrValue) {
            this.reqStrValue = reqStrValue;
            return this;
        }
    
        public String getReqStrValue() { return reqStrValue; }
    
        public Builder() { }
        public Builder(MyField other) {
            this.optValue = other.optValue;
            this.value = other.value;
            this.reqValue = other.reqValue;
            this.optEnumValue = other.optEnumValue;
            this.enumValue = other.enumValue;
            this.reqEnumValue = other.reqEnumValue;
            this.optStrValue = other.optStrValue;
            this.strValue = other.strValue;
            this.reqStrValue = other.reqStrValue;
        }
    
        @ThriftConstructor
        public MyField build() {
            MyField result = new MyField (
                this.optValue,
                this.value,
                this.reqValue,
                this.optEnumValue,
                this.enumValue,
                this.reqEnumValue,
                this.optStrValue,
                this.strValue,
                this.reqStrValue
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap<>();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap<>();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("MyField");
    private final Long optValue;
    public static final int _OPT_VALUE = 1;
    private static final TField OPT_VALUE_FIELD_DESC = new TField("opt_value", TType.I64, (short)1);
        private final long value;
    public static final int _VALUE = 2;
    private static final TField VALUE_FIELD_DESC = new TField("value", TType.I64, (short)2);
        private final long reqValue;
    public static final int _REQ_VALUE = 3;
    private static final TField REQ_VALUE_FIELD_DESC = new TField("req_value", TType.I64, (short)3);
        private final test.fixtures.refs.MyEnum optEnumValue;
    public static final int _OPT_ENUM_VALUE = 4;
    private static final TField OPT_ENUM_VALUE_FIELD_DESC = new TField("opt_enum_value", TType.I32, (short)4);
        private final test.fixtures.refs.MyEnum enumValue;
    public static final int _ENUM_VALUE = 5;
    private static final TField ENUM_VALUE_FIELD_DESC = new TField("enum_value", TType.I32, (short)5);
        private final test.fixtures.refs.MyEnum reqEnumValue;
    public static final int _REQ_ENUM_VALUE = 6;
    private static final TField REQ_ENUM_VALUE_FIELD_DESC = new TField("req_enum_value", TType.I32, (short)6);
        private final String optStrValue;
    public static final int _OPT_STR_VALUE = 7;
    private static final TField OPT_STR_VALUE_FIELD_DESC = new TField("opt_str_value", TType.STRING, (short)7);
        private final String strValue;
    public static final int _STR_VALUE = 8;
    private static final TField STR_VALUE_FIELD_DESC = new TField("str_value", TType.STRING, (short)8);
        private final String reqStrValue;
    public static final int _REQ_STR_VALUE = 9;
    private static final TField REQ_STR_VALUE_FIELD_DESC = new TField("req_str_value", TType.STRING, (short)9);
    static {
      NAMES_TO_IDS.put("optValue", 1);
      THRIFT_NAMES_TO_IDS.put("opt_value", 1);
      FIELD_METADATA.put(1, OPT_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("value", 2);
      THRIFT_NAMES_TO_IDS.put("value", 2);
      FIELD_METADATA.put(2, VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("reqValue", 3);
      THRIFT_NAMES_TO_IDS.put("req_value", 3);
      FIELD_METADATA.put(3, REQ_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("optEnumValue", 4);
      THRIFT_NAMES_TO_IDS.put("opt_enum_value", 4);
      FIELD_METADATA.put(4, OPT_ENUM_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("enumValue", 5);
      THRIFT_NAMES_TO_IDS.put("enum_value", 5);
      FIELD_METADATA.put(5, ENUM_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("reqEnumValue", 6);
      THRIFT_NAMES_TO_IDS.put("req_enum_value", 6);
      FIELD_METADATA.put(6, REQ_ENUM_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("optStrValue", 7);
      THRIFT_NAMES_TO_IDS.put("opt_str_value", 7);
      FIELD_METADATA.put(7, OPT_STR_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("strValue", 8);
      THRIFT_NAMES_TO_IDS.put("str_value", 8);
      FIELD_METADATA.put(8, STR_VALUE_FIELD_DESC);
      NAMES_TO_IDS.put("reqStrValue", 9);
      THRIFT_NAMES_TO_IDS.put("req_str_value", 9);
      FIELD_METADATA.put(9, REQ_STR_VALUE_FIELD_DESC);
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="opt_value", requiredness=Requiredness.OPTIONAL)
    public Long getOptValue() { return optValue; }

    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="value", requiredness=Requiredness.NONE)
    public long getValue() { return value; }

    
    
    @com.facebook.swift.codec.ThriftField(value=3, name="req_value", requiredness=Requiredness.REQUIRED)
    public long getReqValue() { return reqValue; }

    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="opt_enum_value", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.refs.MyEnum getOptEnumValue() { return optEnumValue; }

    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=5, name="enum_value", requiredness=Requiredness.NONE)
    public test.fixtures.refs.MyEnum getEnumValue() { return enumValue; }

    
    
    @com.facebook.swift.codec.ThriftField(value=6, name="req_enum_value", requiredness=Requiredness.REQUIRED)
    public test.fixtures.refs.MyEnum getReqEnumValue() { return reqEnumValue; }

    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=7, name="opt_str_value", requiredness=Requiredness.OPTIONAL)
    public String getOptStrValue() { return optStrValue; }

    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=8, name="str_value", requiredness=Requiredness.NONE)
    public String getStrValue() { return strValue; }

    
    
    @com.facebook.swift.codec.ThriftField(value=9, name="req_str_value", requiredness=Requiredness.REQUIRED)
    public String getReqStrValue() { return reqStrValue; }

    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("optValue", optValue);
        helper.add("value", value);
        helper.add("reqValue", reqValue);
        helper.add("optEnumValue", optEnumValue);
        helper.add("enumValue", enumValue);
        helper.add("reqEnumValue", reqEnumValue);
        helper.add("optStrValue", optStrValue);
        helper.add("strValue", strValue);
        helper.add("reqStrValue", reqStrValue);
        return helper.toString();
    }

    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        MyField other = (MyField)o;
    
        return
            Objects.equals(optValue, other.optValue) &&
            Objects.equals(value, other.value) &&
            Objects.equals(reqValue, other.reqValue) &&
            Objects.equals(optEnumValue, other.optEnumValue) &&
            Objects.equals(enumValue, other.enumValue) &&
            Objects.equals(reqEnumValue, other.reqEnumValue) &&
            Objects.equals(optStrValue, other.optStrValue) &&
            Objects.equals(strValue, other.strValue) &&
            Objects.equals(reqStrValue, other.reqStrValue) &&
            true;
    }

    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            optValue,
            value,
            reqValue,
            optEnumValue,
            enumValue,
            reqEnumValue,
            optStrValue,
            strValue,
            reqStrValue
        });
    }

    
    public static com.facebook.thrift.payload.Reader<MyField> asReader() {
      return MyField::read0;
    }
    
    public static MyField read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(MyField.NAMES_TO_IDS, MyField.THRIFT_NAMES_TO_IDS, MyField.FIELD_METADATA);
      MyField.Builder builder = new MyField.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _OPT_VALUE:
          if (__field.type == TType.I64) {
            Long  optValue = oprot.readI64();
            builder.setOptValue(optValue);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _VALUE:
          if (__field.type == TType.I64) {
            long value = oprot.readI64();
            builder.setValue(value);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _REQ_VALUE:
          if (__field.type == TType.I64) {
            long reqValue = oprot.readI64();
            builder.setReqValue(reqValue);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPT_ENUM_VALUE:
          if (__field.type == TType.I32) {
            test.fixtures.refs.MyEnum  optEnumValue = test.fixtures.refs.MyEnum .fromInteger(oprot.readI32());
            builder.setOptEnumValue(optEnumValue);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _ENUM_VALUE:
          if (__field.type == TType.I32) {
            test.fixtures.refs.MyEnum enumValue = test.fixtures.refs.MyEnum.fromInteger(oprot.readI32());
            builder.setEnumValue(enumValue);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _REQ_ENUM_VALUE:
          if (__field.type == TType.I32) {
            test.fixtures.refs.MyEnum reqEnumValue = test.fixtures.refs.MyEnum.fromInteger(oprot.readI32());
            builder.setReqEnumValue(reqEnumValue);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPT_STR_VALUE:
          if (__field.type == TType.STRING) {
            String  optStrValue = oprot.readString();
            builder.setOptStrValue(optStrValue);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _STR_VALUE:
          if (__field.type == TType.STRING) {
            String strValue = oprot.readString();
            builder.setStrValue(strValue);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _REQ_STR_VALUE:
          if (__field.type == TType.STRING) {
            String reqStrValue = oprot.readString();
            builder.setReqStrValue(reqStrValue);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }

    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (optValue != null) {
        oprot.writeFieldBegin(OPT_VALUE_FIELD_DESC);
        oprot.writeI64(this.optValue);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldBegin(VALUE_FIELD_DESC);
      oprot.writeI64(this.value);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(REQ_VALUE_FIELD_DESC);
      oprot.writeI64(this.reqValue);
      oprot.writeFieldEnd();
      if (optEnumValue != null) {
        oprot.writeFieldBegin(OPT_ENUM_VALUE_FIELD_DESC);
        oprot.writeI32(this.optEnumValue == null ? 0 : com.facebook.thrift.util.EnumUtil.getValue(this.optEnumValue));
        oprot.writeFieldEnd();
      }
      oprot.writeFieldBegin(ENUM_VALUE_FIELD_DESC);
      oprot.writeI32(this.enumValue == null ? 0 : com.facebook.thrift.util.EnumUtil.getValue(this.enumValue));
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(REQ_ENUM_VALUE_FIELD_DESC);
      oprot.writeI32(this.reqEnumValue == null ? 0 : com.facebook.thrift.util.EnumUtil.getValue(this.reqEnumValue));
      oprot.writeFieldEnd();
      if (optStrValue != null) {
        oprot.writeFieldBegin(OPT_STR_VALUE_FIELD_DESC);
        oprot.writeString(this.optStrValue);
        oprot.writeFieldEnd();
      }
      if (strValue != null) {
        oprot.writeFieldBegin(STR_VALUE_FIELD_DESC);
        oprot.writeString(this.strValue);
        oprot.writeFieldEnd();
      }
      if (reqStrValue != null) {
        oprot.writeFieldBegin(REQ_STR_VALUE_FIELD_DESC);
        oprot.writeString(this.reqStrValue);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    private static class _MyFieldLazy {
        private static final MyField _DEFAULT = new MyField.Builder().build();
    }
    
    public static MyField defaultInstance() {
        return  _MyFieldLazy._DEFAULT;
    }
}

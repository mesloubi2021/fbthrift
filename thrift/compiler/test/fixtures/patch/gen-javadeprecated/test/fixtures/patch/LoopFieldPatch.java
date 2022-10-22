/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class LoopFieldPatch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("LoopFieldPatch");
  private static final TField BAR_FIELD_DESC = new TField("bar", TType.STRUCT, (short)-1);

  public BarPatch bar;
  public static final int BAR = -1;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(BAR, new FieldMetaData("bar", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, BarPatch.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(LoopFieldPatch.class, metaDataMap);
  }

  public LoopFieldPatch() {
  }

  public LoopFieldPatch(
      BarPatch bar) {
    this();
    this.bar = bar;
  }

  public static class Builder {
    private BarPatch bar;

    public Builder() {
    }

    public Builder setBar(final BarPatch bar) {
      this.bar = bar;
      return this;
    }

    public LoopFieldPatch build() {
      LoopFieldPatch result = new LoopFieldPatch();
      result.setBar(this.bar);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public LoopFieldPatch(LoopFieldPatch other) {
    if (other.isSetBar()) {
      this.bar = TBaseHelper.deepCopy(other.bar);
    }
  }

  public LoopFieldPatch deepCopy() {
    return new LoopFieldPatch(this);
  }

  public BarPatch getBar() {
    return this.bar;
  }

  public LoopFieldPatch setBar(BarPatch bar) {
    this.bar = bar;
    return this;
  }

  public void unsetBar() {
    this.bar = null;
  }

  // Returns true if field bar is set (has been assigned a value) and false otherwise
  public boolean isSetBar() {
    return this.bar != null;
  }

  public void setBarIsSet(boolean __value) {
    if (!__value) {
      this.bar = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case BAR:
      if (__value == null) {
        unsetBar();
      } else {
        setBar((BarPatch)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case BAR:
      return getBar();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof LoopFieldPatch))
      return false;
    LoopFieldPatch that = (LoopFieldPatch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetBar(), that.isSetBar(), this.bar, that.bar)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {bar});
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case BAR:
          if (__field.type == TType.STRUCT) {
            this.bar = new BarPatch();
            this.bar.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.bar != null) {
      oprot.writeFieldBegin(BAR_FIELD_DESC);
      this.bar.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("LoopFieldPatch");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("bar");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getBar() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getBar(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}


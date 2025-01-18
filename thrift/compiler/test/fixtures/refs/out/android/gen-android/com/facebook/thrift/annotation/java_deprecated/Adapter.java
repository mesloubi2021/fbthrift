/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package com.facebook.thrift.annotation.java_deprecated;

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
public class Adapter implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("Adapter");
  private static final TField ADAPTER_CLASS_NAME_FIELD_DESC = new TField("adapterClassName", TType.STRING, (short)1);
  private static final TField TYPE_CLASS_NAME_FIELD_DESC = new TField("typeClassName", TType.STRING, (short)2);

  public final String adapterClassName;
  public final String typeClassName;
  public static final int ADAPTERCLASSNAME = 1;
  public static final int TYPECLASSNAME = 2;

  public Adapter(
      String adapterClassName,
      String typeClassName) {
    this.adapterClassName = adapterClassName;
    this.typeClassName = typeClassName;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Adapter(Adapter other) {
    if (other.isSetAdapterClassName()) {
      this.adapterClassName = TBaseHelper.deepCopy(other.adapterClassName);
    } else {
      this.adapterClassName = null;
    }
    if (other.isSetTypeClassName()) {
      this.typeClassName = TBaseHelper.deepCopy(other.typeClassName);
    } else {
      this.typeClassName = null;
    }
  }

  public Adapter deepCopy() {
    return new Adapter(this);
  }

  public String getAdapterClassName() {
    return this.adapterClassName;
  }

  // Returns true if field adapterClassName is set (has been assigned a value) and false otherwise
  public boolean isSetAdapterClassName() {
    return this.adapterClassName != null;
  }

  public String getTypeClassName() {
    return this.typeClassName;
  }

  // Returns true if field typeClassName is set (has been assigned a value) and false otherwise
  public boolean isSetTypeClassName() {
    return this.typeClassName != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof Adapter))
      return false;
    Adapter that = (Adapter)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetAdapterClassName(), that.isSetAdapterClassName(), this.adapterClassName, that.adapterClassName)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetTypeClassName(), that.isSetTypeClassName(), this.typeClassName, that.typeClassName)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {adapterClassName, typeClassName});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static Adapter deserialize(TProtocol iprot) throws TException {
    String tmp_adapterClassName = null;
    String tmp_typeClassName = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case ADAPTERCLASSNAME:
          if (__field.type == TType.STRING) {
            tmp_adapterClassName = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case TYPECLASSNAME:
          if (__field.type == TType.STRING) {
            tmp_typeClassName = iprot.readString();
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

    Adapter _that;
    _that = new Adapter(
      tmp_adapterClassName
      ,tmp_typeClassName
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.adapterClassName != null) {
      oprot.writeFieldBegin(ADAPTER_CLASS_NAME_FIELD_DESC);
      oprot.writeString(this.adapterClassName);
      oprot.writeFieldEnd();
    }
    if (this.typeClassName != null) {
      oprot.writeFieldBegin(TYPE_CLASS_NAME_FIELD_DESC);
      oprot.writeString(this.typeClassName);
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
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}


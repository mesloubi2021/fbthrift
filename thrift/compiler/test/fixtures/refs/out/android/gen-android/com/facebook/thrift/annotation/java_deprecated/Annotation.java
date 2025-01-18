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
public class Annotation implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("Annotation");
  private static final TField JAVA_ANNOTATION_FIELD_DESC = new TField("java_annotation", TType.STRING, (short)1);

  public final String java_annotation;
  public static final int JAVA_ANNOTATION = 1;

  public Annotation(
      String java_annotation) {
    this.java_annotation = java_annotation;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Annotation(Annotation other) {
    if (other.isSetJava_annotation()) {
      this.java_annotation = TBaseHelper.deepCopy(other.java_annotation);
    } else {
      this.java_annotation = null;
    }
  }

  public Annotation deepCopy() {
    return new Annotation(this);
  }

  public String getJava_annotation() {
    return this.java_annotation;
  }

  // Returns true if field java_annotation is set (has been assigned a value) and false otherwise
  public boolean isSetJava_annotation() {
    return this.java_annotation != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof Annotation))
      return false;
    Annotation that = (Annotation)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetJava_annotation(), that.isSetJava_annotation(), this.java_annotation, that.java_annotation)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {java_annotation});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static Annotation deserialize(TProtocol iprot) throws TException {
    String tmp_java_annotation = null;
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
        case JAVA_ANNOTATION:
          if (__field.type == TType.STRING) {
            tmp_java_annotation = iprot.readString();
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

    Annotation _that;
    _that = new Annotation(
      tmp_java_annotation
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.java_annotation != null) {
      oprot.writeFieldBegin(JAVA_ANNOTATION_FIELD_DESC);
      oprot.writeString(this.java_annotation);
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


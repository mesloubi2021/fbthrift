/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.adapter;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("Baz")
public final class Baz implements com.facebook.thrift.payload.ThriftSerializable {
    
    private static final boolean allowNullFieldValues =
        System.getProperty("thrift.union.allow-null-field-values", "false").equalsIgnoreCase("true");

    private static final TStruct STRUCT_DESC = new TStruct("Baz");
    private static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    private static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final Baz _DEFAULT = new Baz();

    public static final int _INTFIELD = 1;
    private static final TField INT_FIELD_FIELD_DESC = new TField("intField", TType.I32, (short)1);
    public static final int _SETFIELD = 4;
    private static final TField SET_FIELD_FIELD_DESC = new TField("setField", TType.SET, (short)4);
    public static final int _MAPFIELD = 6;
    private static final TField MAP_FIELD_FIELD_DESC = new TField("mapField", TType.MAP, (short)6);
    public static final int _BINARYFIELD = 8;
    private static final TField BINARY_FIELD_FIELD_DESC = new TField("binaryField", TType.STRING, (short)8);
    public static final int _LONGFIELD = 9;
    private static final TField LONG_FIELD_FIELD_DESC = new TField("longField", TType.I64, (short)9);

    static {
      NAMES_TO_IDS.put("intField", 1);
      THRIFT_NAMES_TO_IDS.put("intField", 1);
      FIELD_METADATA.put(1, INT_FIELD_FIELD_DESC);
      NAMES_TO_IDS.put("setField", 4);
      THRIFT_NAMES_TO_IDS.put("setField", 4);
      FIELD_METADATA.put(4, SET_FIELD_FIELD_DESC);
      NAMES_TO_IDS.put("mapField", 6);
      THRIFT_NAMES_TO_IDS.put("mapField", 6);
      FIELD_METADATA.put(6, MAP_FIELD_FIELD_DESC);
      NAMES_TO_IDS.put("binaryField", 8);
      THRIFT_NAMES_TO_IDS.put("binaryField", 8);
      FIELD_METADATA.put(8, BINARY_FIELD_FIELD_DESC);
      NAMES_TO_IDS.put("longField", 9);
      THRIFT_NAMES_TO_IDS.put("longField", 9);
      FIELD_METADATA.put(9, LONG_FIELD_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("facebook.com/thrift/test/Baz"),
        Baz.class, Baz::read0));
    }

    private java.lang.Object value;
    private short id;

    public enum TypeEnum {
      __FBTHRIFT_EMPTY_UNION__,
      INT_FIELD,
      SET_FIELD,
      MAP_FIELD,
      BINARY_FIELD,
      LONG_FIELD,
    }

    public static Baz from(int _id, java.lang.Object _field) {
        return from((short) _id, _field);
    }

    public static Baz from(short _id, java.lang.Object _field) {
        java.util.Objects.requireNonNull(_field);
        if (!FIELD_METADATA.containsKey(Integer.valueOf(_id))) {
            throw new java.lang.IllegalArgumentException("unknown field " + _id);
        }

        Baz _u = new  Baz();

        try {
            switch(_id) {
                case 1:
                    _u.id = _id;
                    _u.value = (int) _field;
                    return _u;
                case 4:
                    _u.id = _id;
                    _u.value = (Set<String>) _field;
                    return _u;
                case 6:
                    _u.id = _id;
                    _u.value = (Map<String, List<String>>) _field;
                    return _u;
                case 8:
                    _u.id = _id;
                    _u.value = (byte[]) _field;
                    return _u;
                case 9:
                    _u.id = _id;
                    _u.value = (long) _field;
                    return _u;
                default:
                throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
            }
        } catch (java.lang.Exception t) {
            throw new IllegalArgumentException("invalid type " + _field.getClass().getName() + " for field " + _id);
        }
    }

    @ThriftConstructor
    public Baz() {
    }
    
    @ThriftConstructor
    @Deprecated
    public Baz(final int intField) {
        this.value = intField;
        this.id = 1;
    }
    
    @ThriftConstructor
    @Deprecated
    public Baz(final Set<String> setField) {
        if (!Baz.allowNullFieldValues && setField == null) {
            throw new TProtocolException("Cannot initialize Union field 'Baz.setField' with null value!");
        }
        this.value = setField;
        this.id = 4;
    }
    
    @ThriftConstructor
    @Deprecated
    public Baz(final Map<String, List<String>> mapField) {
        if (!Baz.allowNullFieldValues && mapField == null) {
            throw new TProtocolException("Cannot initialize Union field 'Baz.mapField' with null value!");
        }
        this.value = mapField;
        this.id = 6;
    }
    
    @ThriftConstructor
    @Deprecated
    public Baz(final byte[] binaryField) {
        if (!Baz.allowNullFieldValues && binaryField == null) {
            throw new TProtocolException("Cannot initialize Union field 'Baz.binaryField' with null value!");
        }
        this.value = binaryField;
        this.id = 8;
    }
    
    @ThriftConstructor
    @Deprecated
    public Baz(final long longField) {
        this.value = longField;
        this.id = 9;
    }
    
    public static Baz fromIntField(final int intField) {
        Baz res = new Baz();
        res.value = intField;
        res.id = 1;
        return res;
    }
    
    public static Baz fromSetField(final Set<String> setField) {
        Baz res = new Baz();
        if (!Baz.allowNullFieldValues && setField == null) {
            throw new TProtocolException("Cannot initialize Union field 'Baz.setField' with null value!");
        }
        res.value = setField;
        res.id = 4;
        return res;
    }
    
    public static Baz fromMapField(final Map<String, List<String>> mapField) {
        Baz res = new Baz();
        if (!Baz.allowNullFieldValues && mapField == null) {
            throw new TProtocolException("Cannot initialize Union field 'Baz.mapField' with null value!");
        }
        res.value = mapField;
        res.id = 6;
        return res;
    }
    
    public static Baz fromBinaryField(final byte[] binaryField) {
        Baz res = new Baz();
        if (!Baz.allowNullFieldValues && binaryField == null) {
            throw new TProtocolException("Cannot initialize Union field 'Baz.binaryField' with null value!");
        }
        res.value = binaryField;
        res.id = 8;
        return res;
    }
    
    public static Baz fromLongField(final long longField) {
        Baz res = new Baz();
        res.value = longField;
        res.id = 9;
        return res;
    }

    

    @com.facebook.swift.codec.ThriftField(value=1, name="intField", requiredness=Requiredness.NONE)
    public int getIntField() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a intField element!");
        }
        return (int) value;
    }

    public boolean isSetIntField() {
        return this.id == 1;
    }

    @com.facebook.swift.codec.ThriftField(value=4, name="setField", requiredness=Requiredness.NONE)
    public Set<String> getSetField() {
        if (this.id != 4) {
            throw new IllegalStateException("Not a setField element!");
        }
        return (Set<String>) value;
    }

    public boolean isSetSetField() {
        return this.id == 4;
    }

    @com.facebook.swift.codec.ThriftField(value=6, name="mapField", requiredness=Requiredness.NONE)
    public Map<String, List<String>> getMapField() {
        if (this.id != 6) {
            throw new IllegalStateException("Not a mapField element!");
        }
        return (Map<String, List<String>>) value;
    }

    public boolean isSetMapField() {
        return this.id == 6;
    }

    @com.facebook.swift.codec.ThriftField(value=8, name="binaryField", requiredness=Requiredness.NONE)
    public byte[] getBinaryField() {
        if (this.id != 8) {
            throw new IllegalStateException("Not a binaryField element!");
        }
        return (byte[]) value;
    }

    public boolean isSetBinaryField() {
        return this.id == 8;
    }

    @com.facebook.swift.codec.ThriftField(value=9, name="longField", requiredness=Requiredness.NONE)
    public long getLongField() {
        if (this.id != 9) {
            throw new IllegalStateException("Not a longField element!");
        }
        return (long) value;
    }

    public boolean isSetLongField() {
        return this.id == 9;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public TypeEnum getThriftUnionType() {
      switch(this.id) {
        case 0:
          return TypeEnum.__FBTHRIFT_EMPTY_UNION__;
        case 1:
          return TypeEnum.INT_FIELD;
        case 4:
          return TypeEnum.SET_FIELD;
        case 6:
          return TypeEnum.MAP_FIELD;
        case 8:
          return TypeEnum.BINARY_FIELD;
        case 9:
          return TypeEnum.LONG_FIELD;
        default:
          throw new IllegalStateException("unreachable");
      }
    }

    public String getThriftName() {
        TField tField = (TField) FIELD_METADATA.get((int) this.id);
        if (tField == null) {
            return "null";
        } else {
            return tField.name;
        }
    }

    public <T> T accept(Visitor<T> visitor) {
        if (isSetIntField()) {
            return visitor.visitIntField(getIntField());
        }
        if (isSetSetField()) {
            return visitor.visitSetField(getSetField());
        }
        if (isSetMapField()) {
            return visitor.visitMapField(getMapField());
        }
        if (isSetBinaryField()) {
            return visitor.visitBinaryField(getBinaryField());
        }
        if (isSetLongField()) {
            return visitor.visitLongField(getLongField());
        }

        throw new IllegalStateException("Visitor missing for type " + this.getThriftUnionType());
    }

    @java.lang.Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", getThriftName())
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
            .toString();
    }

    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        Baz other = (Baz)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value);
    }

    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            id,
            value,
        });
    }

    public interface Visitor<T> {
        default T visit(Baz acceptor) {
        return acceptor.accept(this);
        }

        T visitIntField(int intField);
        T visitSetField(Set<String> setField);
        T visitMapField(Map<String, List<String>> mapField);
        T visitBinaryField(byte[] binaryField);
        T visitLongField(long longField);
    }

    public void write0(TProtocol oprot) throws TException {
      if (this.id != 0 && this.value == null ){
        if(allowNullFieldValues) {
          // Warning: this path will generate corrupt serialized data!
          return;
        } else {
          throw new TProtocolException("Cannot write a Union with marked-as-set but null value!");
        }
      }
      oprot.writeStructBegin(STRUCT_DESC);
      switch (this.id) {
      case _INTFIELD: {
        oprot.writeFieldBegin(INT_FIELD_FIELD_DESC);
        int intField = (int)this.value;
        oprot.writeI32(intField);
        oprot.writeFieldEnd();
        break;
      }
      case _SETFIELD: {
        oprot.writeFieldBegin(SET_FIELD_FIELD_DESC);
        Set<String> _iter0 = (Set<String>)this.value;
        oprot.writeSetBegin(new TSet(TType.STRING, _iter0.size()));
            for (String _iter1 : _iter0) {
              oprot.writeString(_iter1);
            }
            oprot.writeSetEnd();
        oprot.writeFieldEnd();
        break;
      }
      case _MAPFIELD: {
        oprot.writeFieldBegin(MAP_FIELD_FIELD_DESC);
        Map<String, List<String>> _iter0 = (Map<String, List<String>>)this.value;
        oprot.writeMapBegin(new TMap(TType.STRING, TType.LIST, _iter0.size()));
            for (Map.Entry<String, List<String>> _iter1 : _iter0.entrySet()) {
              oprot.writeString(_iter1.getKey());
              oprot.writeListBegin(new TList(TType.STRING, _iter1.getValue().size()));
            for (String _iter2 : _iter1.getValue()) {
              oprot.writeString(_iter2);
            }
            oprot.writeListEnd();
            }
            oprot.writeMapEnd();
        oprot.writeFieldEnd();
        break;
      }
      case _BINARYFIELD: {
        oprot.writeFieldBegin(BINARY_FIELD_FIELD_DESC);
        byte[] binaryField = (byte[])this.value;
        oprot.writeBinary(java.nio.ByteBuffer.wrap(binaryField));
        oprot.writeFieldEnd();
        break;
      }
      case _LONGFIELD: {
        oprot.writeFieldBegin(LONG_FIELD_FIELD_DESC);
        long longField = (long)this.value;
        oprot.writeI64(longField);
        oprot.writeFieldEnd();
        break;
      }
      default:
          // ignore unknown field
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    
    public static com.facebook.thrift.payload.Reader<Baz> asReader() {
      return Baz::read0;
    }
    
    public static Baz read0(TProtocol oprot) throws TException {
      Baz res = new Baz();
      res.value = null;
      res.id = (short) 0;
      oprot.readStructBegin(Baz.NAMES_TO_IDS, Baz.THRIFT_NAMES_TO_IDS, Baz.FIELD_METADATA);
      TField __field = oprot.readFieldBegin();
      if (__field.type != TType.STOP) {
          switch (__field.id) {
          case _INTFIELD:
            if (__field.type == INT_FIELD_FIELD_DESC.type) {
              int intField = oprot.readI32();
              res.value = intField;
            }
            break;
          case _SETFIELD:
            if (__field.type == SET_FIELD_FIELD_DESC.type) {
              Set<String> setField;
                {
                TSet _set = oprot.readSetBegin();
                setField = new HashSet<String>(Math.max(0, _set.size));
                for (int _i = 0; (_set.size < 0) ? oprot.peekSet() : (_i < _set.size); _i++) {
                    
                    String _value1 = oprot.readString();
                    setField.add(_value1);
                }
                oprot.readSetEnd();
                }
              res.value = setField;
            }
            break;
          case _MAPFIELD:
            if (__field.type == MAP_FIELD_FIELD_DESC.type) {
              Map<String, List<String>> mapField;
                {
                TMap _map = oprot.readMapBegin();
                mapField = new HashMap<String, List<String>>(Math.max(0, _map.size));
                for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                    
                    String _key1 = oprot.readString();
                    List<String> _value1;
                                {
                                TList _list1 = oprot.readListBegin();
                                _value1 = new ArrayList<String>(Math.max(0, _list1.size));
                                for (int _i1 = 0; (_list1.size < 0) ? oprot.peekList() : (_i1 < _list1.size); _i1++) {
                                    
                                    
                                    String _value2 = oprot.readString();
                                    
                                    
                                    _value1.add(_value2);
                                    
                                }
                                oprot.readListEnd();
                                }
                    mapField.put(_key1, _value1);
                }
                }
                oprot.readMapEnd();
              res.value = mapField;
            }
            break;
          case _BINARYFIELD:
            if (__field.type == BINARY_FIELD_FIELD_DESC.type) {
              byte[] binaryField = oprot.readBinary().array();
              res.value = binaryField;
            }
            break;
          case _LONGFIELD:
            if (__field.type == LONG_FIELD_FIELD_DESC.type) {
              long longField = oprot.readI64();
              res.value = longField;
            }
            break;
          default:
            TProtocolUtil.skip(oprot, __field.type);
          }
        if (res.value != null) {
          res.id = __field.id;
        }
        oprot.readFieldEnd();
        TField __stopField = oprot.readFieldBegin(); // Consume the STOP byte
        if (__stopField.type != TType.STOP) {
          throw new TProtocolException(TProtocolException.INVALID_DATA, "Union 'Baz' is missing a STOP byte");
        }
      }
      oprot.readStructEnd();
      return res;
    }
    public static Baz defaultInstance() {
        return _DEFAULT;
    }

}

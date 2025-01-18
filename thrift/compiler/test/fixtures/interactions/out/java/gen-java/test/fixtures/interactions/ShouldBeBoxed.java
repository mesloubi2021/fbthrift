/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.interactions;

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
@com.facebook.swift.codec.ThriftStruct(value="ShouldBeBoxed", builder=ShouldBeBoxed.Builder.class)
public final class ShouldBeBoxed implements com.facebook.thrift.payload.ThriftSerializable {
    @ThriftConstructor
    public ShouldBeBoxed(
        @com.facebook.swift.codec.ThriftField(value=1, name="sessionId", requiredness=Requiredness.NONE) final String sessionId
    ) {
        this.sessionId = sessionId;
    }
    
    @ThriftConstructor
    protected ShouldBeBoxed() {
      this.sessionId = null;
    }

    public static Builder builder() {
      return new Builder();
    }

    public static Builder builder(ShouldBeBoxed other) {
      return new Builder(other);
    }

    public static class Builder {
        private String sessionId = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="sessionId", requiredness=Requiredness.NONE)    public Builder setSessionId(String sessionId) {
            this.sessionId = sessionId;
            return this;
        }
    
        public String getSessionId() { return sessionId; }
    
        public Builder() { }
        public Builder(ShouldBeBoxed other) {
            this.sessionId = other.sessionId;
        }
    
        @ThriftConstructor
        public ShouldBeBoxed build() {
            ShouldBeBoxed result = new ShouldBeBoxed (
                this.sessionId
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap<>();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap<>();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("ShouldBeBoxed");
    private final String sessionId;
    public static final int _SESSIONID = 1;
    private static final TField SESSION_ID_FIELD_DESC = new TField("sessionId", TType.STRING, (short)1);
    static {
      NAMES_TO_IDS.put("sessionId", 1);
      THRIFT_NAMES_TO_IDS.put("sessionId", 1);
      FIELD_METADATA.put(1, SESSION_ID_FIELD_DESC);
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="sessionId", requiredness=Requiredness.NONE)
    public String getSessionId() { return sessionId; }

    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("sessionId", sessionId);
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
    
        ShouldBeBoxed other = (ShouldBeBoxed)o;
    
        return
            Objects.equals(sessionId, other.sessionId) &&
            true;
    }

    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            sessionId
        });
    }

    
    public static com.facebook.thrift.payload.Reader<ShouldBeBoxed> asReader() {
      return ShouldBeBoxed::read0;
    }
    
    public static ShouldBeBoxed read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(ShouldBeBoxed.NAMES_TO_IDS, ShouldBeBoxed.THRIFT_NAMES_TO_IDS, ShouldBeBoxed.FIELD_METADATA);
      ShouldBeBoxed.Builder builder = new ShouldBeBoxed.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _SESSIONID:
          if (__field.type == TType.STRING) {
            String sessionId = oprot.readString();
            builder.setSessionId(sessionId);
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
      if (sessionId != null) {
        oprot.writeFieldBegin(SESSION_ID_FIELD_DESC);
        oprot.writeString(this.sessionId);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

    private static class _ShouldBeBoxedLazy {
        private static final ShouldBeBoxed _DEFAULT = new ShouldBeBoxed.Builder().build();
    }
    
    public static ShouldBeBoxed defaultInstance() {
        return  _ShouldBeBoxedLazy._DEFAULT;
    }
}

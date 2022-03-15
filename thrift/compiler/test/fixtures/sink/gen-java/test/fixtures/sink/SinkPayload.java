/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.sink;

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
@com.facebook.swift.codec.ThriftStruct(value="SinkPayload", builder=SinkPayload.Builder.class)
public final class SinkPayload implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public SinkPayload(
        @com.facebook.swift.codec.ThriftField(value=1, name="content", requiredness=Requiredness.NONE) final String content
    ) {
        this.content = content;
    }
    
    @ThriftConstructor
    protected SinkPayload() {
      this.content = null;
    }
    
    public static class Builder {
    
        private String content = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="content", requiredness=Requiredness.NONE)
        public Builder setContent(String content) {
            this.content = content;
            return this;
        }
    
        public String getContent() { return content; }
    
        public Builder() { }
        public Builder(SinkPayload other) {
            this.content = other.content;
        }
    
        @ThriftConstructor
        public SinkPayload build() {
            SinkPayload result = new SinkPayload (
                this.content
            );
            return result;
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("SinkPayload");
    private final String content;
    public static final int _CONTENT = 1;
    private static final TField CONTENT_FIELD_DESC = new TField("content", TType.STRING, (short)1);
    static {
      NAMES_TO_IDS.put("content", 1);
      THRIFT_NAMES_TO_IDS.put("content", 1);
      FIELD_METADATA.put(1, CONTENT_FIELD_DESC);
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="content", requiredness=Requiredness.NONE)
    public String getContent() { return content; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("content", content);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        SinkPayload other = (SinkPayload)o;
    
        return
            Objects.equals(content, other.content) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            content
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<SinkPayload> asReader() {
      return SinkPayload::read0;
    }
    
    public static SinkPayload read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(SinkPayload.NAMES_TO_IDS, SinkPayload.THRIFT_NAMES_TO_IDS, SinkPayload.FIELD_METADATA);
      SinkPayload.Builder builder = new SinkPayload.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _CONTENT:
          if (__field.type == TType.STRING) {
            String content = oprot.readString();
            builder.setContent(content);
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
      if (this.content != null) {
        oprot.writeFieldBegin(CONTENT_FIELD_DESC);
        oprot.writeString(this.content);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _SinkPayloadLazy {
        private static final SinkPayload _DEFAULT = new SinkPayload.Builder().build();
    }
    
    public static SinkPayload defaultInstance() {
        return  _SinkPayloadLazy._DEFAULT;
    }
}

@Override
public FloatBuffer duplicate() {
    DirectReadWriteFloatBufferAdapter buf = new DirectReadWriteFloatBufferAdapter((DirectReadWriteByteBuffer) byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

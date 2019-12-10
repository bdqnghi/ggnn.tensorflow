@Override
public FloatBuffer duplicate() {
    DirectReadOnlyFloatBufferAdapter buf = new DirectReadOnlyFloatBufferAdapter((DirectByteBuffer) byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

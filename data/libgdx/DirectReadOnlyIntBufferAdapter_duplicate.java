@Override
public IntBuffer duplicate() {
    DirectReadOnlyIntBufferAdapter buf = new DirectReadOnlyIntBufferAdapter((DirectByteBuffer) byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

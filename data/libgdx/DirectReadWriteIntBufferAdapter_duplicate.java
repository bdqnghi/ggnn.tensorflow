@Override
public IntBuffer duplicate() {
    DirectReadWriteIntBufferAdapter buf = new DirectReadWriteIntBufferAdapter((DirectReadWriteByteBuffer) byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

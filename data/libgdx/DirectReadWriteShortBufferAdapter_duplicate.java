@Override
public ShortBuffer duplicate() {
    DirectReadWriteShortBufferAdapter buf = new DirectReadWriteShortBufferAdapter((DirectReadWriteByteBuffer) byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

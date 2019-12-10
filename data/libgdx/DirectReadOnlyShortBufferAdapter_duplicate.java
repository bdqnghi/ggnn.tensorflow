@Override
public ShortBuffer duplicate() {
    DirectReadOnlyShortBufferAdapter buf = new DirectReadOnlyShortBufferAdapter((DirectByteBuffer) byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

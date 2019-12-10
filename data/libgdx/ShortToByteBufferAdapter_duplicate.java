@Override
public ShortBuffer duplicate() {
    ShortToByteBufferAdapter buf = new ShortToByteBufferAdapter(byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

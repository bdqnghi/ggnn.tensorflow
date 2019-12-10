@Override
public LongBuffer duplicate() {
    LongToByteBufferAdapter buf = new LongToByteBufferAdapter(byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

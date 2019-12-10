@Override
public DoubleBuffer duplicate() {
    DoubleToByteBufferAdapter buf = new DoubleToByteBufferAdapter(byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

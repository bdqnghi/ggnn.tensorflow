@Override
public CharBuffer duplicate() {
    CharToByteBufferAdapter buf = new CharToByteBufferAdapter(byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

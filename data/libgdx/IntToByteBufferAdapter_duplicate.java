@Override
public IntBuffer duplicate() {
    IntToByteBufferAdapter buf = new IntToByteBufferAdapter(byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

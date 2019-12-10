@Override
public FloatBuffer duplicate() {
    FloatToByteBufferAdapter buf = new FloatToByteBufferAdapter(byteBuffer.duplicate());
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

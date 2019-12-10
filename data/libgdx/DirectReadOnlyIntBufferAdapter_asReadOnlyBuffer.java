@Override
public IntBuffer asReadOnlyBuffer() {
    DirectReadOnlyIntBufferAdapter buf = new DirectReadOnlyIntBufferAdapter(byteBuffer);
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

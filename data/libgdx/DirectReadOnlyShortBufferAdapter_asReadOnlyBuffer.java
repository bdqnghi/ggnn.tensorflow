@Override
public ShortBuffer asReadOnlyBuffer() {
    DirectReadOnlyShortBufferAdapter buf = new DirectReadOnlyShortBufferAdapter(byteBuffer);
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

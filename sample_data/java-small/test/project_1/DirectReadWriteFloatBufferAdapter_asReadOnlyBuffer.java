// TODO(haustein) This will be slow
@Override
public FloatBuffer asReadOnlyBuffer() {
    DirectReadOnlyFloatBufferAdapter buf = new DirectReadOnlyFloatBufferAdapter(byteBuffer);
    buf.limit = limit;
    buf.position = position;
    buf.mark = mark;
    return buf;
}

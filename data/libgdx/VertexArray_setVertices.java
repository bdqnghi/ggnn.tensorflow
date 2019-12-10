@Override
public void setVertices(float[] vertices, int offset, int count) {
    BufferUtils.copy(vertices, byteBuffer, count, offset);
    buffer.position(0);
    buffer.limit(count);
}

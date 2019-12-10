@Override
public void setVertices(float[] vertices, int offset, int count) {
    isDirty = true;
    if (isDirect) {
        BufferUtils.copy(vertices, byteBuffer, count, offset);
        buffer.position(0);
        buffer.limit(count);
    } else {
        buffer.clear();
        buffer.put(vertices, offset, count);
        buffer.flip();
        byteBuffer.position(0);
        byteBuffer.limit(buffer.limit() << 2);
    }
    bufferChanged();
}

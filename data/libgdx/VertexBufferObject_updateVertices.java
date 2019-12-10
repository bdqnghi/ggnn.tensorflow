@Override
public void updateVertices(int targetOffset, float[] vertices, int sourceOffset, int count) {
    isDirty = true;
    final int pos = buffer.position();
    buffer.position(targetOffset);
    BufferUtils.copy(vertices, sourceOffset, count, buffer);
    buffer.position(pos);
    bufferChanged();
}

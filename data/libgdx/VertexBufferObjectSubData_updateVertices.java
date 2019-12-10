@Override
public void updateVertices(int targetOffset, float[] vertices, int sourceOffset, int count) {
    isDirty = true;
    if (isDirect) {
        final int pos = byteBuffer.position();
        byteBuffer.position(targetOffset * 4);
        BufferUtils.copy(vertices, sourceOffset, count, byteBuffer);
        byteBuffer.position(pos);
    } else
        // Should never happen
        throw new GdxRuntimeException("Buffer must be allocated direct.");
    bufferChanged();
}

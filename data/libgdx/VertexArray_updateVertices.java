@Override
public void updateVertices(int targetOffset, float[] vertices, int sourceOffset, int count) {
    final int pos = byteBuffer.position();
    byteBuffer.position(targetOffset * 4);
    BufferUtils.copy(vertices, sourceOffset, count, byteBuffer);
    byteBuffer.position(pos);
}

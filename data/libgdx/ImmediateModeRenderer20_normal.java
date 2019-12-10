public void normal(float x, float y, float z) {
    final int idx = vertexIdx + normalOffset;
    vertices[idx] = x;
    vertices[idx + 1] = y;
    vertices[idx + 2] = z;
}

public void vertex(float x, float y, float z) {
    final int idx = vertexIdx;
    vertices[idx] = x;
    vertices[idx + 1] = y;
    vertices[idx + 2] = z;
    numSetTexCoords = 0;
    vertexIdx += vertexSize;
    numVertices++;
}

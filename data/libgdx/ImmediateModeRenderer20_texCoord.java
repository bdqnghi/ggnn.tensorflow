public void texCoord(float u, float v) {
    final int idx = vertexIdx + texCoordOffset;
    vertices[idx + numSetTexCoords] = u;
    vertices[idx + numSetTexCoords + 1] = v;
    numSetTexCoords += 2;
}

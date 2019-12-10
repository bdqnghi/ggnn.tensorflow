@Override
public void addMesh(float[] vertices, short[] indices) {
    final short offset = (short) (lastIndex + 1);
    final int numVertices = vertices.length / stride;
    ensureVertices(numVertices);
    for (int v = 0; v < vertices.length; v += stride) addVertex(vertices, v);
    ensureIndices(indices.length);
    for (int i = 0; i < indices.length; ++i) index((short) (indices[i] + offset));
}

/**
 * Convenience method to set this btIndexedMesh to the specified vertex and index data.
 * The specified data must be indexed and triangulated and must outlive this btIndexedMesh.
 */
public void set(final Object tag, final FloatBuffer vertices, int sizeInBytesOfEachVertex, int vertexCount, int positionOffsetInBytes, final ShortBuffer indices, int indexOffset, int indexCount) {
    setVertices(vertices, sizeInBytesOfEachVertex, vertexCount, positionOffsetInBytes);
    setIndices(indices, indexOffset, indexCount);
    this.tag = tag;
}

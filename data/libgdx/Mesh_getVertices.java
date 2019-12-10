/**
 * Copies the specified vertices from the Mesh to the float array. The float array must be large enough to hold
 * destOffset+count vertices.
 * @param srcOffset the offset (in number of floats) of the vertices in the mesh to copy
 * @param count the amount of floats to copy
 * @param vertices the array to copy the vertices to
 * @param destOffset the offset (in floats) in the vertices array to start copying
 */
public float[] getVertices(int srcOffset, int count, float[] vertices, int destOffset) {
    // TODO: Perhaps this method should be vertexSize aware??
    final int max = getNumVertices() * getVertexSize() / 4;
    if (count == -1) {
        count = max - srcOffset;
        if (count > vertices.length - destOffset)
            count = vertices.length - destOffset;
    }
    if (srcOffset < 0 || count <= 0 || (srcOffset + count) > max || destOffset < 0 || destOffset >= vertices.length)
        throw new IndexOutOfBoundsException();
    if ((vertices.length - destOffset) < count)
        throw new IllegalArgumentException("not enough room in vertices array, has " + vertices.length + " floats, needs " + count);
    int pos = getVerticesBuffer().position();
    getVerticesBuffer().position(srcOffset);
    getVerticesBuffer().get(vertices, destOffset, count);
    getVerticesBuffer().position(pos);
    return vertices;
}

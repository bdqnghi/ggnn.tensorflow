/**
 * Method to transform the texture coordinates (UV) in the float array. This is a potentially slow operation, use with care.
 * @param matrix the transformation matrix
 * @param vertices the float array
 * @param vertexSize the number of floats in each vertex
 * @param offset the offset within a vertex to the texture location
 * @param start the vertex to start with
 * @param count the amount of vertices to transform
 */
public static void transformUV(final Matrix3 matrix, final float[] vertices, int vertexSize, int offset, int start, int count) {
    if (start < 0 || count < 1 || ((start + count) * vertexSize) > vertices.length)
        throw new IndexOutOfBoundsException("start = " + start + ", count = " + count + ", vertexSize = " + vertexSize + ", length = " + vertices.length);
    final Vector2 tmp = new Vector2();
    int idx = offset + (start * vertexSize);
    for (int i = 0; i < count; i++) {
        tmp.set(vertices[idx], vertices[idx + 1]).mul(matrix);
        vertices[idx] = tmp.x;
        vertices[idx + 1] = tmp.y;
        idx += vertexSize;
    }
}

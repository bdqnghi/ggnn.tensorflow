/**
 * Method to transform the positions in the float array. Normals will be kept as is. This is a potentially slow operation, use
 * with care.
 * @param matrix the transformation matrix
 * @param vertices the float array
 * @param vertexSize the number of floats in each vertex
 * @param offset the offset within a vertex to the position
 * @param dimensions the size of the position
 * @param start the vertex to start with
 * @param count the amount of vertices to transform
 */
public static void transform(final Matrix4 matrix, final float[] vertices, int vertexSize, int offset, int dimensions, int start, int count) {
    if (offset < 0 || dimensions < 1 || (offset + dimensions) > vertexSize)
        throw new IndexOutOfBoundsException();
    if (start < 0 || count < 1 || ((start + count) * vertexSize) > vertices.length)
        throw new IndexOutOfBoundsException("start = " + start + ", count = " + count + ", vertexSize = " + vertexSize + ", length = " + vertices.length);
    final Vector3 tmp = new Vector3();
    int idx = offset + (start * vertexSize);
    switch(dimensions) {
        case 1:
            for (int i = 0; i < count; i++) {
                tmp.set(vertices[idx], 0, 0).mul(matrix);
                vertices[idx] = tmp.x;
                idx += vertexSize;
            }
            break;
        case 2:
            for (int i = 0; i < count; i++) {
                tmp.set(vertices[idx], vertices[idx + 1], 0).mul(matrix);
                vertices[idx] = tmp.x;
                vertices[idx + 1] = tmp.y;
                idx += vertexSize;
            }
            break;
        case 3:
            for (int i = 0; i < count; i++) {
                tmp.set(vertices[idx], vertices[idx + 1], vertices[idx + 2]).mul(matrix);
                vertices[idx] = tmp.x;
                vertices[idx + 1] = tmp.y;
                vertices[idx + 2] = tmp.z;
                idx += vertexSize;
            }
            break;
    }
}

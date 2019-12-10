/**
 * Triangulates the given (convex or concave) simple polygon to a list of triangle vertices.
 * @param vertices pairs describing vertices of the polygon, in either clockwise or counterclockwise order.
 * @return triples of triangle indices in clockwise order. Note the returned array is reused for later calls to the same
 *         method.
 */
public ShortArray computeTriangles(float[] vertices, int offset, int count) {
    this.vertices = vertices;
    int vertexCount = this.vertexCount = count / 2;
    int vertexOffset = offset / 2;
    ShortArray indicesArray = this.indicesArray;
    indicesArray.clear();
    indicesArray.ensureCapacity(vertexCount);
    indicesArray.size = vertexCount;
    short[] indices = this.indices = indicesArray.items;
    if (areVerticesClockwise(vertices, offset, count)) {
        for (short i = 0; i < vertexCount; i++) indices[i] = (short) (vertexOffset + i);
    } else {
        for (int i = 0, n = vertexCount - 1; i < vertexCount; i++) // Reversed.
        indices[i] = (short) (vertexOffset + n - i);
    }
    IntArray vertexTypes = this.vertexTypes;
    vertexTypes.clear();
    vertexTypes.ensureCapacity(vertexCount);
    for (int i = 0, n = vertexCount; i < n; ++i) vertexTypes.add(classifyVertex(i));
    // A polygon with n vertices has a triangulation of n-2 triangles.
    ShortArray triangles = this.triangles;
    triangles.clear();
    triangles.ensureCapacity(Math.max(0, vertexCount - 2) * 3);
    triangulate();
    return triangles;
}

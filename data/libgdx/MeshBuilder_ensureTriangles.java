/**
 * Increases the size of the backing vertices and indices arrays to accommodate the specified number of additional vertices and
 * triangles. Useful before adding many triangles to avoid multiple backing array resizes. Assumes each triangles adds 3
 * vertices.
 * @param numTriangles The number of triangles you are about to add
 */
public void ensureTriangles(int numTriangles) {
    ensureTriangles(3 * numTriangles, numTriangles);
}

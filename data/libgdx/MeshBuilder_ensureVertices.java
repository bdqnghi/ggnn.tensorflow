/**
 * Increases the size of the backing vertices array to accommodate the specified number of additional vertices. Useful before
 * adding many vertices to avoid multiple backing array resizes.
 * @param numVertices The number of vertices you are about to add
 */
public void ensureVertices(int numVertices) {
    vertices.ensureCapacity(stride * numVertices);
}

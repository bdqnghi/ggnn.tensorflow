/**
 * Increases the size of the backing vertices and indices arrays to accommodate the specified number of additional vertices and
 * indices. Useful before adding many vertices and indices to avoid multiple backing array resizes.
 * @param numVertices The number of vertices you are about to add
 * @param numIndices The number of indices you are about to add
 */
public void ensureCapacity(int numVertices, int numIndices) {
    ensureVertices(numVertices);
    ensureIndices(numIndices);
}

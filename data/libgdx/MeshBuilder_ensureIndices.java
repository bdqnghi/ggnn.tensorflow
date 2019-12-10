/**
 * Increases the size of the backing indices array to accommodate the specified number of additional indices. Useful before
 * adding many indices to avoid multiple backing array resizes.
 * @param numIndices The number of indices you are about to add
 */
public void ensureIndices(int numIndices) {
    indices.ensureCapacity(numIndices);
}

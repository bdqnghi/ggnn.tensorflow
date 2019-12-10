/**
 * Copies the indices from the Mesh to the short array. The short array must be large enough to hold destOffset + count
 * indices.
 * @param srcOffset the zero-based offset of the first index to fetch
 * @param count the total amount of indices to copy
 * @param indices the array to copy the indices to
 * @param destOffset the offset in the indices array to start copying
 */
public void getIndices(int srcOffset, int count, short[] indices, int destOffset) {
    int max = getNumIndices();
    if (count < 0)
        count = max - srcOffset;
    if (srcOffset < 0 || srcOffset >= max || srcOffset + count > max)
        throw new IllegalArgumentException("Invalid range specified, offset: " + srcOffset + ", count: " + count + ", max: " + max);
    if ((indices.length - destOffset) < count)
        throw new IllegalArgumentException("not enough room in indices array, has " + indices.length + " shorts, needs " + count);
    int pos = getIndicesBuffer().position();
    getIndicesBuffer().position(srcOffset);
    getIndicesBuffer().get(indices, destOffset, count);
    getIndicesBuffer().position(pos);
}

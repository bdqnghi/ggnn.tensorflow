/**
 * Sets the indices of this Mesh.
 *
 * @param indices the indices
 * @param offset the offset into the indices array
 * @param count the number of indices to copy
 * @return the mesh for invocation chaining.
 */
public Mesh setIndices(short[] indices, int offset, int count) {
    this.indices.setIndices(indices, offset, count);
    return this;
}

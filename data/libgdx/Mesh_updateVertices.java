/**
 * Update (a portion of) the vertices. Does not resize the backing buffer.
 * @param targetOffset the offset in number of floats of the mesh part.
 * @param source the vertex data to update the mesh part with
 * @param sourceOffset the offset in number of floats within the source array
 * @param count the number of floats to update
 */
public Mesh updateVertices(int targetOffset, float[] source, int sourceOffset, int count) {
    this.vertices.updateVertices(targetOffset, source, sourceOffset, count);
    return this;
}

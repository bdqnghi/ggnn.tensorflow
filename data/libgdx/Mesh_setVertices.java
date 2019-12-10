/**
 * Sets the vertices of this Mesh. The attributes are assumed to be given in float format.
 *
 * @param vertices the vertices.
 * @param offset the offset into the vertices array
 * @param count the number of floats to use
 * @return the mesh for invocation chaining.
 */
public Mesh setVertices(float[] vertices, int offset, int count) {
    this.vertices.setVertices(vertices, offset, count);
    return this;
}

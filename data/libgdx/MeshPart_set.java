/**
 * Set this MeshPart to given values, does not {@link #update()} the bounding box values.
 * @return this MeshPart, for chaining.
 */
public MeshPart set(final String id, final Mesh mesh, final int offset, final int size, final int type) {
    this.id = id;
    this.mesh = mesh;
    this.offset = offset;
    this.size = size;
    this.primitiveType = type;
    this.center.set(0, 0, 0);
    this.halfExtents.set(0, 0, 0);
    this.radius = -1f;
    return this;
}

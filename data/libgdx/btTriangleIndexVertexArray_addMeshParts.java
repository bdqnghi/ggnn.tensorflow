/**
 * Add one or more {@link MeshPart} instances to this btTriangleIndexVertexArray.
 * The specified meshes must be indexed and triangulated and must outlive this btTriangleIndexVertexArray.
 * The buffers for the vertices and indices are shared amongst both.
 */
public <T extends MeshPart> btTriangleIndexVertexArray addMeshParts(final Iterable<T> meshParts) {
    for (final MeshPart meshPart : meshParts) addMeshPart(meshPart);
    return this;
}

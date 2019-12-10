/**
 * Add one or more {@link NodePart} instances to this btTriangleIndexVertexArray.
 * The specified meshes must be indexed and triangulated and must outlive this btTriangleIndexVertexArray.
 * The buffers for the vertices and indices are shared amongst both.
 */
public <T extends NodePart> btTriangleIndexVertexArray addNodeParts(final Iterable<T> nodeParts) {
    for (final NodePart nodePart : nodeParts) addMeshPart(nodePart.meshPart);
    return this;
}

@Override
public boolean canRender(final Renderable renderable) {
    final Attributes attributes = combineAttributes(renderable);
    return (attributesMask == (attributes.getMask() | optionalAttributes)) && (vertexMask == renderable.meshPart.mesh.getVertexAttributes().getMask()) && (renderable.environment != null) == lighting;
}

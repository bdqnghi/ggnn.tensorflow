@Override
public boolean canRender(final Renderable renderable) {
    return (materialMask == (renderable.material.getMask() | optionalAttributes)) && (vertexMask == renderable.meshPart.mesh.getVertexAttributes().getMask());
}

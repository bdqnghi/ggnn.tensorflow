@Override
public boolean canRender(Renderable renderable) {
    final Attributes attributes = combineAttributes(renderable);
    if (attributes.has(BlendingAttribute.Type)) {
        if ((attributesMask & BlendingAttribute.Type) != BlendingAttribute.Type)
            return false;
        if (attributes.has(TextureAttribute.Diffuse) != ((attributesMask & TextureAttribute.Diffuse) == TextureAttribute.Diffuse))
            return false;
    }
    final boolean skinned = ((renderable.meshPart.mesh.getVertexAttributes().getMask() & Usage.BoneWeight) == Usage.BoneWeight);
    if (skinned != (numBones > 0))
        return false;
    if (!skinned)
        return true;
    int w = 0;
    final int n = renderable.meshPart.mesh.getVertexAttributes().size();
    for (int i = 0; i < n; i++) {
        final VertexAttribute attr = renderable.meshPart.mesh.getVertexAttributes().get(i);
        if (attr.usage == Usage.BoneWeight)
            w |= (1 << attr.unit);
    }
    return w == weights;
}

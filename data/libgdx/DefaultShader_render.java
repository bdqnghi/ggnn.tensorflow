@Override
public void render(Renderable renderable, Attributes combinedAttributes) {
    if (!combinedAttributes.has(BlendingAttribute.Type))
        context.setBlending(false, GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    bindMaterial(combinedAttributes);
    if (lighting)
        bindLights(renderable, combinedAttributes);
    super.render(renderable, combinedAttributes);
}

@Override
public void render(final Renderable renderable) {
    if (!renderable.material.has(BlendingAttribute.Type))
        context.setBlending(false, GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    bindMaterial(renderable);
    super.render(renderable);
}

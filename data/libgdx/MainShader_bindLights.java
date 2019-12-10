@Override
protected void bindLights(final Renderable renderable, final Attributes attributes) {
    super.bindLights(renderable, attributes);
    final Environment environment = renderable.environment;
    bindDirectionalShadows(attributes);
    bindSpotShadows(attributes);
    if (shadowSystem.getTexture() != null) {
        set(u_shadowTexture, shadowSystem.getTexture());
    }
}

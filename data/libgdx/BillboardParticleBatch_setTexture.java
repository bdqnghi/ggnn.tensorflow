public void setTexture(Texture texture) {
    renderablePool.freeAll(renderables);
    renderables.clear();
    for (int i = 0, free = renderablePool.getFree(); i < free; ++i) {
        Renderable renderable = renderablePool.obtain();
        TextureAttribute attribute = (TextureAttribute) renderable.material.get(TextureAttribute.Diffuse);
        attribute.textureDescription.texture = texture;
    }
    this.texture = texture;
}

public Texture getTexture() {
    TextureAttribute attribute = (TextureAttribute) renderable.material.get(TextureAttribute.Diffuse);
    return attribute.textureDescription.texture;
}

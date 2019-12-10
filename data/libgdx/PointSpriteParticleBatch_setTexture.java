public void setTexture(Texture texture) {
    TextureAttribute attribute = (TextureAttribute) renderable.material.get(TextureAttribute.Diffuse);
    attribute.textureDescription.texture = texture;
}

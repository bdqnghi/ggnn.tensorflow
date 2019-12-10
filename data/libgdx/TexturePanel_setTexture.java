public void setTexture(Texture texture) {
    if (this.texture == texture)
        return;
    this.texture = texture;
    FileTextureData data = (FileTextureData) texture.getTextureData();
    setImage(data.getFileHandle().file().getAbsolutePath());
}

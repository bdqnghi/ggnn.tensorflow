@Override
protected Cubemap createColorTexture() {
    int glFormat = Pixmap.Format.toGlFormat(format);
    int glType = Pixmap.Format.toGlType(format);
    GLOnlyTextureData data = new GLOnlyTextureData(width, height, 0, glFormat, glFormat, glType);
    Cubemap result = new Cubemap(data, data, data, data, data, data);
    result.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    result.setWrap(TextureWrap.ClampToEdge, TextureWrap.ClampToEdge);
    return result;
}

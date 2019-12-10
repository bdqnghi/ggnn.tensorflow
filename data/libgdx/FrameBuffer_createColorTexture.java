@Override
protected Texture createColorTexture() {
    int glFormat = Pixmap.Format.toGlFormat(format);
    int glType = Pixmap.Format.toGlType(format);
    GLOnlyTextureData data = new GLOnlyTextureData(width, height, 0, glFormat, glFormat, glType);
    Texture result = new Texture(data);
    result.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    result.setWrap(TextureWrap.ClampToEdge, TextureWrap.ClampToEdge);
    return result;
}

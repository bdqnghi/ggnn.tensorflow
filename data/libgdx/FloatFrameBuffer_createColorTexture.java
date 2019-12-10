@Override
protected Texture createColorTexture() {
    FloatTextureData data = new FloatTextureData(width, height);
    Texture result = new Texture(data);
    if (Gdx.app.getType() == ApplicationType.Desktop || Gdx.app.getType() == ApplicationType.Applet)
        result.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    else
        // no filtering for float textures in OpenGL ES
        result.setFilter(TextureFilter.Nearest, TextureFilter.Nearest);
    result.setWrap(TextureWrap.ClampToEdge, TextureWrap.ClampToEdge);
    return result;
}

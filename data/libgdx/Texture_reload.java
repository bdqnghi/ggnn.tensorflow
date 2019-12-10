/**
 * Used internally to reload after context loss. Creates a new GL handle then calls {@link #load(TextureData)}. Use this only
 * if you know what you do!
 */
@Override
protected void reload() {
    if (!isManaged())
        throw new GdxRuntimeException("Tried to reload unmanaged Texture");
    glHandle = Gdx.gl.glGenTexture();
    load(data);
}

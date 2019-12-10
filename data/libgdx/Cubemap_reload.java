@Override
protected void reload() {
    if (!isManaged())
        throw new GdxRuntimeException("Tried to reload an unmanaged Cubemap");
    glHandle = Gdx.gl.glGenTexture();
    load(data);
}

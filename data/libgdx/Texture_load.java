public void load(TextureData data) {
    if (this.data != null && data.isManaged() != this.data.isManaged())
        throw new GdxRuntimeException("New data must have the same managed status as the old data");
    this.data = data;
    if (!data.isPrepared())
        data.prepare();
    bind();
    uploadImageData(GL20.GL_TEXTURE_2D, data);
    setFilter(minFilter, magFilter);
    setWrap(uWrap, vWrap);
    Gdx.gl.glBindTexture(glTarget, 0);
}

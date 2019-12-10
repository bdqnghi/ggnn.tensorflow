@Override
public void consumeCustomData(int target) {
    if (!isPrepared)
        throw new GdxRuntimeException("Call prepare() before calling consumeCompressedData()");
    if (!Gdx.graphics.supportsExtension("GL_OES_compressed_ETC1_RGB8_texture")) {
        Pixmap pixmap = ETC1.decodeImage(data, Format.RGB565);
        Gdx.gl.glTexImage2D(target, 0, pixmap.getGLInternalFormat(), pixmap.getWidth(), pixmap.getHeight(), 0, pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
        if (useMipMaps)
            MipMapGenerator.generateMipMap(target, pixmap, pixmap.getWidth(), pixmap.getHeight());
        pixmap.dispose();
        useMipMaps = false;
    } else {
        Gdx.gl.glCompressedTexImage2D(target, 0, ETC1.ETC1_RGB8_OES, width, height, 0, data.compressedData.capacity() - data.dataOffset, data.compressedData);
        if (useMipMaps())
            Gdx.gl20.glGenerateMipmap(GL20.GL_TEXTURE_2D);
    }
    data.dispose();
    data = null;
    isPrepared = false;
}

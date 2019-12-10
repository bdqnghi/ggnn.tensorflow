public static void uploadImageData(int target, TextureData data, int miplevel) {
    if (data == null) {
        // FIXME: remove texture on target?
        return;
    }
    if (!data.isPrepared())
        data.prepare();
    final TextureDataType type = data.getType();
    if (type == TextureDataType.Custom) {
        data.consumeCustomData(target);
        return;
    }
    Pixmap pixmap = data.consumePixmap();
    boolean disposePixmap = data.disposePixmap();
    if (data.getFormat() != pixmap.getFormat()) {
        Pixmap tmp = new Pixmap(pixmap.getWidth(), pixmap.getHeight(), data.getFormat());
        Blending blend = Pixmap.getBlending();
        Pixmap.setBlending(Blending.None);
        tmp.drawPixmap(pixmap, 0, 0, 0, 0, pixmap.getWidth(), pixmap.getHeight());
        Pixmap.setBlending(blend);
        if (data.disposePixmap()) {
            pixmap.dispose();
        }
        pixmap = tmp;
        disposePixmap = true;
    }
    Gdx.gl.glPixelStorei(GL20.GL_UNPACK_ALIGNMENT, 1);
    if (data.useMipMaps()) {
        MipMapGenerator.generateMipMap(target, pixmap, pixmap.getWidth(), pixmap.getHeight());
    } else {
        Gdx.gl.glTexImage2D(target, miplevel, pixmap.getGLInternalFormat(), pixmap.getWidth(), pixmap.getHeight(), 0, pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
    }
    if (disposePixmap)
        pixmap.dispose();
}

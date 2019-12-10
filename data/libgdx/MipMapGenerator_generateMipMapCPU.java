private static void generateMipMapCPU(int target, Pixmap pixmap, int textureWidth, int textureHeight) {
    Gdx.gl.glTexImage2D(target, 0, pixmap.getGLInternalFormat(), pixmap.getWidth(), pixmap.getHeight(), 0, pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
    if ((Gdx.gl20 == null) && textureWidth != textureHeight)
        throw new GdxRuntimeException("texture width and height must be square when using mipmapping.");
    int width = pixmap.getWidth() / 2;
    int height = pixmap.getHeight() / 2;
    int level = 1;
    Blending blending = Pixmap.getBlending();
    Pixmap.setBlending(Blending.None);
    while (width > 0 && height > 0) {
        Pixmap tmp = new Pixmap(width, height, pixmap.getFormat());
        tmp.drawPixmap(pixmap, 0, 0, pixmap.getWidth(), pixmap.getHeight(), 0, 0, width, height);
        if (level > 1)
            pixmap.dispose();
        pixmap = tmp;
        Gdx.gl.glTexImage2D(target, level, pixmap.getGLInternalFormat(), pixmap.getWidth(), pixmap.getHeight(), 0, pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
        width = pixmap.getWidth() / 2;
        height = pixmap.getHeight() / 2;
        level++;
    }
    Pixmap.setBlending(blending);
}

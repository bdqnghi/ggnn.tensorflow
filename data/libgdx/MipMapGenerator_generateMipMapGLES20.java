private static void generateMipMapGLES20(int target, Pixmap pixmap) {
    Gdx.gl.glTexImage2D(target, 0, pixmap.getGLInternalFormat(), pixmap.getWidth(), pixmap.getHeight(), 0, pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
    Gdx.gl20.glGenerateMipmap(target);
}

private static void generateMipMapDesktop(int target, Pixmap pixmap, int textureWidth, int textureHeight) {
    if (Gdx.graphics.supportsExtension("GL_ARB_framebuffer_object") || Gdx.graphics.supportsExtension("GL_EXT_framebuffer_object") || Gdx.gl30 != null) {
        Gdx.gl.glTexImage2D(target, 0, pixmap.getGLInternalFormat(), pixmap.getWidth(), pixmap.getHeight(), 0, pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
        Gdx.gl20.glGenerateMipmap(target);
    } else {
        generateMipMapCPU(target, pixmap, textureWidth, textureHeight);
    }
}

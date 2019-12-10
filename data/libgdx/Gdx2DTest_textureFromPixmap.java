Texture textureFromPixmap(Gdx2DPixmap pixmap) {
    Texture texture = new Texture(pixmap.getWidth(), pixmap.getHeight(), Format.RGB565);
    texture.bind();
    Gdx.gl.glTexImage2D(GL20.GL_TEXTURE_2D, 0, pixmap.getGLInternalFormat(), pixmap.getWidth(), pixmap.getHeight(), 0, pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
    return texture;
}

public static Pixmap getFrameBufferPixmap(int x, int y, int w, int h) {
    Gdx.gl.glPixelStorei(GL20.GL_PACK_ALIGNMENT, 1);
    final Pixmap pixmap = new Pixmap(w, h, Format.RGBA8888);
    ByteBuffer pixels = pixmap.getPixels();
    Gdx.gl.glReadPixels(x, y, w, h, GL20.GL_RGBA, GL20.GL_UNSIGNED_BYTE, pixels);
    return pixmap;
}

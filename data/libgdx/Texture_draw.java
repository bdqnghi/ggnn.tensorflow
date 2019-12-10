/**
 * Draws the given {@link Pixmap} to the texture at position x, y. No clipping is performed so you have to make sure that you
 * draw only inside the texture region. Note that this will only draw to mipmap level 0!
 *
 * @param pixmap The Pixmap
 * @param x The x coordinate in pixels
 * @param y The y coordinate in pixels
 */
public void draw(Pixmap pixmap, int x, int y) {
    if (data.isManaged())
        throw new GdxRuntimeException("can't draw to a managed texture");
    bind();
    Gdx.gl.glTexSubImage2D(glTarget, 0, x, y, pixmap.getWidth(), pixmap.getHeight(), pixmap.getGLFormat(), pixmap.getGLType(), pixmap.getPixels());
}

/**
 * Returns a portion of the default framebuffer contents specified by x, y, width and height as a {@link TextureRegion} with
 * the same dimensions. The base {@link Texture} always has {@link MathUtils#nextPowerOfTwo} dimensions and RGBA8888
 * {@link Format}. It can be accessed via {@link TextureRegion#getTexture}. This texture is not managed and has to be reloaded
 * manually on a context loss. If the width and height specified are larger than the framebuffer dimensions, the Texture will
 * be padded accordingly. Pixels that fall outside of the current screen will have RGBA values of 0.
 *
 * @param x the x position of the framebuffer contents to capture
 * @param y the y position of the framebuffer contents to capture
 * @param w the width of the framebuffer contents to capture
 * @param h the height of the framebuffer contents to capture
 */
public static TextureRegion getFrameBufferTexture(int x, int y, int w, int h) {
    final int potW = MathUtils.nextPowerOfTwo(w);
    final int potH = MathUtils.nextPowerOfTwo(h);
    final Pixmap pixmap = getFrameBufferPixmap(x, y, w, h);
    final Pixmap potPixmap = new Pixmap(potW, potH, Format.RGBA8888);
    potPixmap.drawPixmap(pixmap, 0, 0);
    Texture texture = new Texture(potPixmap);
    TextureRegion textureRegion = new TextureRegion(texture, 0, h, w, -h);
    potPixmap.dispose();
    pixmap.dispose();
    return textureRegion;
}

/**
 * Returns a portion of the default framebuffer contents specified by x, y, width and height, as a byte[] array with a length
 * equal to the specified width * height * 4. The byte[] will always contain RGBA8888 data. If the width and height specified
 * are larger than the framebuffer dimensions, the Texture will be padded accordingly. Pixels that fall outside of the current
 * screen will have RGBA values of 0. Because of differences in screen and image origins the framebuffer contents should be
 * flipped along the Y axis if you intend save them to disk as a bitmap. Flipping is not cheap operation, so use this
 * functionality wisely.
 *
 * @param flipY whether to flip pixels along Y axis
 */
public static byte[] getFrameBufferPixels(int x, int y, int w, int h, boolean flipY) {
    Gdx.gl.glPixelStorei(GL20.GL_PACK_ALIGNMENT, 1);
    final ByteBuffer pixels = BufferUtils.newByteBuffer(w * h * 4);
    Gdx.gl.glReadPixels(x, y, w, h, GL20.GL_RGBA, GL20.GL_UNSIGNED_BYTE, pixels);
    final int numBytes = w * h * 4;
    byte[] lines = new byte[numBytes];
    if (flipY) {
        final int numBytesPerLine = w * 4;
        for (int i = 0; i < h; i++) {
            pixels.position((h - i - 1) * numBytesPerLine);
            pixels.get(lines, i * numBytesPerLine, numBytesPerLine);
        }
    } else {
        pixels.clear();
        pixels.get(lines);
    }
    return lines;
}

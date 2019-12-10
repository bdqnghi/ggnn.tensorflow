/**
 * Unbinds the framebuffer and sets viewport sizes, all drawing will be performed to the normal framebuffer from here on.
 *
 * @param x the x-axis position of the viewport in pixels
 * @param y the y-asis position of the viewport in pixels
 * @param width the width of the viewport in pixels
 * @param height the height of the viewport in pixels
 */
public void end(int x, int y, int width, int height) {
    unbind();
    Gdx.gl20.glViewport(x, y, width, height);
}

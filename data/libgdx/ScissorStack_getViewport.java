/**
 * @return the current viewport in OpenGL ES window coordinates based on the currently applied scissor
 */
public static Rectangle getViewport() {
    if (scissors.size == 0) {
        viewport.set(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
        return viewport;
    } else {
        Rectangle scissor = scissors.peek();
        viewport.set(scissor);
        return viewport;
    }
}

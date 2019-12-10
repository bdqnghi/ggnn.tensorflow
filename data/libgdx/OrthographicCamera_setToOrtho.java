/**
 * Sets this camera to an orthographic projection, centered at (viewportWidth/2, viewportHeight/2), with the y-axis pointing up
 * or down.
 * @param yDown whether y should be pointing down.
 * @param viewportWidth
 * @param viewportHeight
 */
public void setToOrtho(boolean yDown, float viewportWidth, float viewportHeight) {
    if (yDown) {
        up.set(0, -1, 0);
        direction.set(0, 0, 1);
    } else {
        up.set(0, 1, 0);
        direction.set(0, 0, -1);
    }
    position.set(zoom * viewportWidth / 2.0f, zoom * viewportHeight / 2.0f, 0);
    this.viewportWidth = viewportWidth;
    this.viewportHeight = viewportHeight;
    update();
}

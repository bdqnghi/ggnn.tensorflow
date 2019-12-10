/**
 * Sets the viewport's bounds in screen coordinates. This is typically set by {@link #update(int, int, boolean)}.
 */
public void setScreenBounds(int screenX, int screenY, int screenWidth, int screenHeight) {
    this.screenX = screenX;
    this.screenY = screenY;
    this.screenWidth = screenWidth;
    this.screenHeight = screenHeight;
}

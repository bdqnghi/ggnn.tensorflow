/**
 * Returns the amount to scroll horizontally when the mouse wheel is scrolled.
 */
protected float getMouseWheelX() {
    return Math.max(areaWidth * 0.9f, maxX * 0.1f) / 4;
}

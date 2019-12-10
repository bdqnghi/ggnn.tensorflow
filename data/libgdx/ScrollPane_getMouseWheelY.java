/**
 * Returns the amount to scroll vertically when the mouse wheel is scrolled.
 */
protected float getMouseWheelY() {
    return Math.max(areaHeight * 0.9f, maxY * 0.1f) / 4;
}

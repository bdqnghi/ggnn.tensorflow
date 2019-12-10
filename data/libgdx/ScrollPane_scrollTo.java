/**
 * Sets the scroll offset so the specified rectangle is fully in view, and optionally centered vertically and/or horizontally,
 * if possible. Coordinates are in the scroll pane widget's coordinate system.
 */
public void scrollTo(float x, float y, float width, float height, boolean centerHorizontal, boolean centerVertical) {
    float amountX = this.amountX;
    if (centerHorizontal) {
        amountX = x - areaWidth / 2 + width / 2;
    } else {
        if (x + width > amountX + areaWidth)
            amountX = x + width - areaWidth;
        if (x < amountX)
            amountX = x;
    }
    scrollX(MathUtils.clamp(amountX, 0, maxX));
    float amountY = this.amountY;
    if (centerVertical) {
        amountY = maxY - y + areaHeight / 2 - height / 2;
    } else {
        if (amountY > maxY - y - height + areaHeight)
            amountY = maxY - y - height + areaHeight;
        if (amountY < maxY - y)
            amountY = maxY - y;
    }
    scrollY(MathUtils.clamp(amountY, 0, maxY));
}

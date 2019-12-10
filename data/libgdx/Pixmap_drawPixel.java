/**
 * Draws a pixel at the given location with the given color.
 *
 * @param x the x-coordinate
 * @param y the y-coordinate
 * @param color the color in RGBA8888 format.
 */
public void drawPixel(int x, int y, int color) {
    setColor(color);
    drawPixel(x, y);
}

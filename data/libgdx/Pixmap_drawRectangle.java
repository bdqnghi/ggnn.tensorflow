/**
 * Draws a rectangle outline starting at x, y extending by width to the right and by height downwards (y-axis points downwards)
 * using the current color.
 *
 * @param x The x coordinate
 * @param y The y coordinate
 * @param width The width in pixels
 * @param height The height in pixels
 */
public void drawRectangle(int x, int y, int width, int height) {
    rectangle(x, y, width, height, DrawType.STROKE);
}

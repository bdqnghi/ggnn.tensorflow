// /**
// * Sets the width in pixels of strokes.
// *
// * @param width The stroke width in pixels.
// */
// public void setStrokeWidth (int width);
/**
 * Draws a line between the given coordinates using the currently set color.
 *
 * @param x The x-coodinate of the first point
 * @param y The y-coordinate of the first point
 * @param x2 The x-coordinate of the first point
 * @param y2 The y-coordinate of the first point
 */
public void drawLine(int x, int y, int x2, int y2) {
    line(x, y, x2, y2, DrawType.STROKE);
}

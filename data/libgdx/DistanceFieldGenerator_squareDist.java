/**
 * Caclulate the squared distance between two points
 *
 * @param x1 The x coordinate of the first point
 * @param y1 The y coordiante of the first point
 * @param x2 The x coordinate of the second point
 * @param y2 The y coordinate of the second point
 * @return The squared distance between the two points
 */
private static int squareDist(final int x1, final int y1, final int x2, final int y2) {
    final int dx = x1 - x2;
    final int dy = y1 - y2;
    return dx * dx + dy * dy;
}

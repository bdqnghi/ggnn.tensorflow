/**
 * Fills a triangle with vertices at x1,y1 and x2,y2 and x3,y3 using the current color.
 *
 * @param x1 The x-coordinate of vertex 1
 * @param y1 The y-coordinate of vertex 1
 * @param x2 The x-coordinate of vertex 2
 * @param y2 The y-coordinate of vertex 2
 * @param x3 The x-coordinate of vertex 3
 * @param y3 The y-coordinate of vertex 3
 */
public void fillTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    triangle(x1, y1, x2, y2, x3, y3, DrawType.FILL);
}

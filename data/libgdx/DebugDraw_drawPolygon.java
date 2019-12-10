/**
 * Draw a closed polygon provided in CCW order. This implementation uses
 * {@link #drawSegment(Vec2, Vec2, Color3f)} to draw each side of the polygon.
 *
 * @param vertices
 * @param vertexCount
 * @param color
 */
public void drawPolygon(Vec2[] vertices, int vertexCount, Color3f color) {
    if (vertexCount == 1) {
        drawSegment(vertices[0], vertices[0], color);
        return;
    }
    for (int i = 0; i < vertexCount - 1; i += 1) {
        drawSegment(vertices[i], vertices[i + 1], color);
    }
    if (vertexCount > 2) {
        drawSegment(vertices[vertexCount - 1], vertices[0], color);
    }
}

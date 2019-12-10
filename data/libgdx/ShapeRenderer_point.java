/**
 * Draws a point using {@link ShapeType#Point}, {@link ShapeType#Line} or {@link ShapeType#Filled}.
 */
public void point(float x, float y, float z) {
    if (shapeType == ShapeType.Line) {
        float size = defaultRectLineWidth * 0.5f;
        line(x - size, y - size, z, x + size, y + size, z);
        return;
    } else if (shapeType == ShapeType.Filled) {
        float size = defaultRectLineWidth * 0.5f;
        box(x - size, y - size, z - size, defaultRectLineWidth, defaultRectLineWidth, defaultRectLineWidth);
        return;
    }
    check(ShapeType.Point, null, 1);
    renderer.color(color);
    renderer.vertex(x, y, z);
}

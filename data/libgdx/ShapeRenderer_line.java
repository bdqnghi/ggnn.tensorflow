/**
 * Draws a line using {@link ShapeType#Line} or {@link ShapeType#Filled}. The line is drawn with two colors interpolated
 * between the start and end points.
 */
public void line(float x, float y, float z, float x2, float y2, float z2, Color c1, Color c2) {
    if (shapeType == ShapeType.Filled) {
        rectLine(x, y, x2, y2, defaultRectLineWidth);
        return;
    }
    check(ShapeType.Line, null, 2);
    renderer.color(c1.r, c1.g, c1.b, c1.a);
    renderer.vertex(x, y, z);
    renderer.color(c2.r, c2.g, c2.b, c2.a);
    renderer.vertex(x2, y2, z2);
}

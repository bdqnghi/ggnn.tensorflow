/**
 * Draws a triangle in x/y plane with colored corners using {@link ShapeType#Line} or {@link ShapeType#Filled}.
 */
public void triangle(float x1, float y1, float x2, float y2, float x3, float y3, Color col1, Color col2, Color col3) {
    check(ShapeType.Line, ShapeType.Filled, 6);
    if (shapeType == ShapeType.Line) {
        renderer.color(col1.r, col1.g, col1.b, col1.a);
        renderer.vertex(x1, y1, 0);
        renderer.color(col2.r, col2.g, col2.b, col2.a);
        renderer.vertex(x2, y2, 0);
        renderer.color(col2.r, col2.g, col2.b, col2.a);
        renderer.vertex(x2, y2, 0);
        renderer.color(col3.r, col3.g, col3.b, col3.a);
        renderer.vertex(x3, y3, 0);
        renderer.color(col3.r, col3.g, col3.b, col3.a);
        renderer.vertex(x3, y3, 0);
        renderer.color(col1.r, col1.g, col1.b, col1.a);
        renderer.vertex(x1, y1, 0);
    } else {
        renderer.color(col1.r, col1.g, col1.b, col1.a);
        renderer.vertex(x1, y1, 0);
        renderer.color(col2.r, col2.g, col2.b, col2.a);
        renderer.vertex(x2, y2, 0);
        renderer.color(col3.r, col3.g, col3.b, col3.a);
        renderer.vertex(x3, y3, 0);
    }
}

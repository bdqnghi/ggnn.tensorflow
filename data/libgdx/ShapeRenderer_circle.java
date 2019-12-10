/**
 * Draws a circle using {@link ShapeType#Line} or {@link ShapeType#Filled}.
 */
public void circle(float x, float y, float radius, int segments) {
    if (segments <= 0)
        throw new IllegalArgumentException("segments must be > 0.");
    float colorBits = color.toFloatBits();
    float angle = 2 * MathUtils.PI / segments;
    float cos = MathUtils.cos(angle);
    float sin = MathUtils.sin(angle);
    float cx = radius, cy = 0;
    if (shapeType == ShapeType.Line) {
        check(ShapeType.Line, ShapeType.Filled, segments * 2 + 2);
        for (int i = 0; i < segments; i++) {
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, 0);
            float temp = cx;
            cx = cos * cx - sin * cy;
            cy = sin * temp + cos * cy;
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, 0);
        }
        // Ensure the last segment is identical to the first.
        renderer.color(colorBits);
        renderer.vertex(x + cx, y + cy, 0);
    } else {
        check(ShapeType.Line, ShapeType.Filled, segments * 3 + 3);
        segments--;
        for (int i = 0; i < segments; i++) {
            renderer.color(colorBits);
            renderer.vertex(x, y, 0);
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, 0);
            float temp = cx;
            cx = cos * cx - sin * cy;
            cy = sin * temp + cos * cy;
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, 0);
        }
        // Ensure the last segment is identical to the first.
        renderer.color(colorBits);
        renderer.vertex(x, y, 0);
        renderer.color(colorBits);
        renderer.vertex(x + cx, y + cy, 0);
    }
    float temp = cx;
    cx = radius;
    cy = 0;
    renderer.color(colorBits);
    renderer.vertex(x + cx, y + cy, 0);
}

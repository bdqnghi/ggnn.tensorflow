/**
 * Draws a cone using {@link ShapeType#Line} or {@link ShapeType#Filled}.
 */
public void cone(float x, float y, float z, float radius, float height, int segments) {
    if (segments <= 0)
        throw new IllegalArgumentException("segments must be > 0.");
    check(ShapeType.Line, ShapeType.Filled, segments * 4 + 2);
    float colorBits = color.toFloatBits();
    float angle = 2 * MathUtils.PI / segments;
    float cos = MathUtils.cos(angle);
    float sin = MathUtils.sin(angle);
    float cx = radius, cy = 0;
    if (shapeType == ShapeType.Line) {
        for (int i = 0; i < segments; i++) {
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, z);
            renderer.color(colorBits);
            renderer.vertex(x, y, z + height);
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, z);
            float temp = cx;
            cx = cos * cx - sin * cy;
            cy = sin * temp + cos * cy;
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, z);
        }
        // Ensure the last segment is identical to the first.
        renderer.color(colorBits);
        renderer.vertex(x + cx, y + cy, z);
    } else {
        segments--;
        for (int i = 0; i < segments; i++) {
            renderer.color(colorBits);
            renderer.vertex(x, y, z);
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, z);
            float temp = cx;
            float temp2 = cy;
            cx = cos * cx - sin * cy;
            cy = sin * temp + cos * cy;
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, z);
            renderer.color(colorBits);
            renderer.vertex(x + temp, y + temp2, z);
            renderer.color(colorBits);
            renderer.vertex(x + cx, y + cy, z);
            renderer.color(colorBits);
            renderer.vertex(x, y, z + height);
        }
        // Ensure the last segment is identical to the first.
        renderer.color(colorBits);
        renderer.vertex(x, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + cx, y + cy, z);
    }
    float temp = cx;
    float temp2 = cy;
    cx = radius;
    cy = 0;
    renderer.color(colorBits);
    renderer.vertex(x + cx, y + cy, z);
    if (shapeType != ShapeType.Line) {
        renderer.color(colorBits);
        renderer.vertex(x + temp, y + temp2, z);
        renderer.color(colorBits);
        renderer.vertex(x + cx, y + cy, z);
        renderer.color(colorBits);
        renderer.vertex(x, y, z + height);
    }
}

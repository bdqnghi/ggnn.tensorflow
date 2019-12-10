/**
 * Draws an ellipse using {@link ShapeType#Line} or {@link ShapeType#Filled}.
 */
public void ellipse(float x, float y, float width, float height, int segments) {
    if (segments <= 0)
        throw new IllegalArgumentException("segments must be > 0.");
    check(ShapeType.Line, ShapeType.Filled, segments * 3);
    float colorBits = color.toFloatBits();
    float angle = 2 * MathUtils.PI / segments;
    float cx = x + width / 2, cy = y + height / 2;
    if (shapeType == ShapeType.Line) {
        for (int i = 0; i < segments; i++) {
            renderer.color(colorBits);
            renderer.vertex(cx + (width * 0.5f * MathUtils.cos(i * angle)), cy + (height * 0.5f * MathUtils.sin(i * angle)), 0);
            renderer.color(colorBits);
            renderer.vertex(cx + (width * 0.5f * MathUtils.cos((i + 1) * angle)), cy + (height * 0.5f * MathUtils.sin((i + 1) * angle)), 0);
        }
    } else {
        for (int i = 0; i < segments; i++) {
            renderer.color(colorBits);
            renderer.vertex(cx + (width * 0.5f * MathUtils.cos(i * angle)), cy + (height * 0.5f * MathUtils.sin(i * angle)), 0);
            renderer.color(colorBits);
            renderer.vertex(cx, cy, 0);
            renderer.color(colorBits);
            renderer.vertex(cx + (width * 0.5f * MathUtils.cos((i + 1) * angle)), cy + (height * 0.5f * MathUtils.sin((i + 1) * angle)), 0);
        }
    }
}

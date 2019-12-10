/**
 * Draws a cube using {@link ShapeType#Line} or {@link ShapeType#Filled}. The x, y and z specify the bottom, left, front corner
 * of the rectangle.
 */
public void box(float x, float y, float z, float width, float height, float depth) {
    depth = -depth;
    float colorBits = color.toFloatBits();
    if (shapeType == ShapeType.Line) {
        check(ShapeType.Line, ShapeType.Filled, 24);
        renderer.color(colorBits);
        renderer.vertex(x, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y, z);
        renderer.color(colorBits);
        renderer.vertex(x, y, z);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z + depth);
    } else {
        check(ShapeType.Line, ShapeType.Filled, 36);
        // Front
        renderer.color(colorBits);
        renderer.vertex(x, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z);
        // Back
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z + depth);
        // Left
        renderer.color(colorBits);
        renderer.vertex(x, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y, z);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z + depth);
        // Right
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z);
        // Top
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z);
        renderer.color(colorBits);
        renderer.vertex(x + width, y + height, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x, y + height, z + depth);
        // Bottom
        renderer.color(colorBits);
        renderer.vertex(x, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z);
        renderer.color(colorBits);
        renderer.vertex(x, y, z + depth);
        renderer.color(colorBits);
        renderer.vertex(x + width, y, z);
        renderer.color(colorBits);
        renderer.vertex(x, y, z);
    }
}

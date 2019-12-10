/**
 * Draws a rectangle in the x/y plane using {@link ShapeType#Line} or {@link ShapeType#Filled}. The x and y specify the lower
 * left corner. The originX and originY specify the point about which to rotate the rectangle.
 * @param col1 The color at (x, y)
 * @param col2 The color at (x + width, y)
 * @param col3 The color at (x + width, y + height)
 * @param col4 The color at (x, y + height)
 */
public void rect(float x, float y, float originX, float originY, float width, float height, float scaleX, float scaleY, float degrees, Color col1, Color col2, Color col3, Color col4) {
    check(ShapeType.Line, ShapeType.Filled, 8);
    float cos = MathUtils.cosDeg(degrees);
    float sin = MathUtils.sinDeg(degrees);
    float fx = -originX;
    float fy = -originY;
    float fx2 = width - originX;
    float fy2 = height - originY;
    if (scaleX != 1 || scaleY != 1) {
        fx *= scaleX;
        fy *= scaleY;
        fx2 *= scaleX;
        fy2 *= scaleY;
    }
    float worldOriginX = x + originX;
    float worldOriginY = y + originY;
    float x1 = cos * fx - sin * fy + worldOriginX;
    float y1 = sin * fx + cos * fy + worldOriginY;
    float x2 = cos * fx2 - sin * fy + worldOriginX;
    float y2 = sin * fx2 + cos * fy + worldOriginY;
    float x3 = cos * fx2 - sin * fy2 + worldOriginX;
    float y3 = sin * fx2 + cos * fy2 + worldOriginY;
    float x4 = x1 + (x3 - x2);
    float y4 = y3 - (y2 - y1);
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
        renderer.color(col4.r, col4.g, col4.b, col4.a);
        renderer.vertex(x4, y4, 0);
        renderer.color(col4.r, col4.g, col4.b, col4.a);
        renderer.vertex(x4, y4, 0);
        renderer.color(col1.r, col1.g, col1.b, col1.a);
        renderer.vertex(x1, y1, 0);
    } else {
        renderer.color(col1.r, col1.g, col1.b, col1.a);
        renderer.vertex(x1, y1, 0);
        renderer.color(col2.r, col2.g, col2.b, col2.a);
        renderer.vertex(x2, y2, 0);
        renderer.color(col3.r, col3.g, col3.b, col3.a);
        renderer.vertex(x3, y3, 0);
        renderer.color(col3.r, col3.g, col3.b, col3.a);
        renderer.vertex(x3, y3, 0);
        renderer.color(col4.r, col4.g, col4.b, col4.a);
        renderer.vertex(x4, y4, 0);
        renderer.color(col1.r, col1.g, col1.b, col1.a);
        renderer.vertex(x1, y1, 0);
    }
}

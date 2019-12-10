/**
 * Returns the circumcenter of the triangle. The input points must not be colinear.
 */
static public Vector2 triangleCircumcenter(float x1, float y1, float x2, float y2, float x3, float y3, Vector2 circumcenter) {
    float dx21 = x2 - x1, dy21 = y2 - y1;
    float dx32 = x3 - x2, dy32 = y3 - y2;
    float dx13 = x1 - x3, dy13 = y1 - y3;
    float det = dx32 * dy21 - dx21 * dy32;
    if (Math.abs(det) < MathUtils.FLOAT_ROUNDING_ERROR)
        throw new IllegalArgumentException("Triangle points must not be colinear.");
    det *= 2;
    float sqr1 = x1 * x1 + y1 * y1, sqr2 = x2 * x2 + y2 * y2, sqr3 = x3 * x3 + y3 * y3;
    circumcenter.set((sqr1 * dy32 + sqr2 * dy13 + sqr3 * dy21) / det, -(sqr1 * dx32 + sqr2 * dx13 + sqr3 * dx21) / det);
    return circumcenter;
}

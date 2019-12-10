/**
 * Returns the inverted Mat22 - does NOT invert the matrix locally!
 */
public final Mat22 invert() {
    final float a = ex.x, b = ey.x, c = ex.y, d = ey.y;
    final Mat22 B = new Mat22();
    float det = a * d - b * c;
    if (det != 0) {
        det = 1.0f / det;
    }
    B.ex.x = det * d;
    B.ey.x = -det * b;
    B.ex.y = -det * c;
    B.ey.y = det * a;
    return B;
}

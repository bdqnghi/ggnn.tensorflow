/**
 * Solve A * x = b where A = this matrix.
 *
 * @return The vector x that solves the above equation.
 */
public final Vec2 solve(final Vec2 b) {
    final float a11 = ex.x, a12 = ey.x, a21 = ex.y, a22 = ey.y;
    float det = a11 * a22 - a12 * a21;
    if (det != 0.0f) {
        det = 1.0f / det;
    }
    final Vec2 x = new Vec2(det * (a22 * b.x - a12 * b.y), det * (a11 * b.y - a21 * b.x));
    return x;
}

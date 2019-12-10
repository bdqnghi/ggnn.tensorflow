/**
 * Solve A * x = b, where b is a column vector. This is more efficient than computing the inverse
 * in one-shot cases.
 *
 * @param b
 * @return
 */
public final void solve22ToOut(Vec2 b, Vec2 out) {
    final float a11 = ex.x, a12 = ey.x, a21 = ex.y, a22 = ey.y;
    float det = a11 * a22 - a12 * a21;
    if (det != 0.0f) {
        det = 1.0f / det;
    }
    out.x = det * (a22 * b.x - a12 * b.y);
    out.y = det * (a11 * b.y - a21 * b.x);
}

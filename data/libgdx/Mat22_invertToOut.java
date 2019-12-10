public final void invertToOut(final Mat22 out) {
    final float a = ex.x, b = ey.x, c = ex.y, d = ey.y;
    float det = a * d - b * c;
    // b2Assert(det != 0.0f);
    det = 1.0f / det;
    out.ex.x = det * d;
    out.ey.x = -det * b;
    out.ex.y = -det * c;
    out.ey.y = det * a;
}

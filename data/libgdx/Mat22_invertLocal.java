public final Mat22 invertLocal() {
    final float a = ex.x, b = ey.x, c = ex.y, d = ey.y;
    float det = a * d - b * c;
    if (det != 0) {
        det = 1.0f / det;
    }
    ex.x = det * d;
    ey.x = -det * b;
    ex.y = -det * c;
    ey.y = det * a;
    return this;
}

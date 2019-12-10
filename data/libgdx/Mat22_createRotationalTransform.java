public final static void createRotationalTransform(float angle, Mat22 out) {
    final float c = MathUtils.cos(angle);
    final float s = MathUtils.sin(angle);
    out.ex.x = c;
    out.ey.x = -s;
    out.ex.y = s;
    out.ey.y = c;
}

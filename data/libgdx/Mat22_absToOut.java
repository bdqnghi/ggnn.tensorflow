/* djm created */
public static void absToOut(final Mat22 R, final Mat22 out) {
    out.ex.x = MathUtils.abs(R.ex.x);
    out.ex.y = MathUtils.abs(R.ex.y);
    out.ey.x = MathUtils.abs(R.ey.x);
    out.ey.y = MathUtils.abs(R.ey.y);
}

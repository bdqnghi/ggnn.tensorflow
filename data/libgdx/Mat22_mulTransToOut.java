public final static void mulTransToOut(final Mat22 A, final Mat22 B, final Mat22 out) {
    final float x1 = A.ex.x * B.ex.x + A.ex.y * B.ex.y;
    final float y1 = A.ey.x * B.ex.x + A.ey.y * B.ex.y;
    final float x2 = A.ex.x * B.ey.x + A.ex.y * B.ey.y;
    final float y2 = A.ey.x * B.ey.x + A.ey.y * B.ey.y;
    out.ex.x = x1;
    out.ex.y = y1;
    out.ey.x = x2;
    out.ey.y = y2;
}

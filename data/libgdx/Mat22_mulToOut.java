public final static void mulToOut(final Mat22 A, final Mat22 B, final Mat22 out) {
    final float tempy1 = A.ex.y * B.ex.x + A.ey.y * B.ex.y;
    final float tempx1 = A.ex.x * B.ex.x + A.ey.x * B.ex.y;
    final float tempy2 = A.ex.y * B.ey.x + A.ey.y * B.ey.y;
    final float tempx2 = A.ex.x * B.ey.x + A.ey.x * B.ey.y;
    out.ex.x = tempx1;
    out.ex.y = tempy1;
    out.ey.x = tempx2;
    out.ey.y = tempy2;
}

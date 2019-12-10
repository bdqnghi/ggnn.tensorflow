public static final void mul22ToOut(Mat33 A, Vec2 v, Vec2 out) {
    final float tempx = A.ex.x * v.x + A.ey.x * v.y;
    out.y = A.ex.y * v.x + A.ey.y * v.y;
    out.x = tempx;
}

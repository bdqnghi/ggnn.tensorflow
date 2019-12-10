public static final void mul22ToOutUnsafe(Mat33 A, Vec2 v, Vec2 out) {
    assert (v != out);
    out.y = A.ex.y * v.x + A.ey.y * v.y;
    out.x = A.ex.x * v.x + A.ey.x * v.y;
}

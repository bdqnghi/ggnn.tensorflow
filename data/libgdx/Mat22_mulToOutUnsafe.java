public final static void mulToOutUnsafe(final Mat22 A, final Mat22 B, final Mat22 out) {
    assert (out != A);
    assert (out != B);
    out.ex.x = A.ex.x * B.ex.x + A.ey.x * B.ex.y;
    out.ex.y = A.ex.y * B.ex.x + A.ey.y * B.ex.y;
    out.ey.x = A.ex.x * B.ey.x + A.ey.x * B.ey.y;
    out.ey.y = A.ex.y * B.ey.x + A.ey.y * B.ey.y;
}

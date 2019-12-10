public final static void mulTransToOutUnsafe(final Mat22 A, final Mat22 B, final Mat22 out) {
    assert (A != out);
    assert (B != out);
    out.ex.x = A.ex.x * B.ex.x + A.ex.y * B.ex.y;
    out.ex.y = A.ey.x * B.ex.x + A.ey.y * B.ex.y;
    out.ey.x = A.ex.x * B.ey.x + A.ex.y * B.ey.y;
    out.ey.y = A.ey.x * B.ey.x + A.ey.y * B.ey.y;
}

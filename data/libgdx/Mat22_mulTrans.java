public final static Mat22 mulTrans(final Mat22 A, final Mat22 B) {
    final Mat22 C = new Mat22();
    C.ex.x = A.ex.x * B.ex.x + A.ex.y * B.ex.y;
    C.ex.y = A.ey.x * B.ex.x + A.ey.y * B.ex.y;
    C.ey.x = A.ex.x * B.ey.x + A.ex.y * B.ey.y;
    C.ey.y = A.ey.x * B.ey.x + A.ey.y * B.ey.y;
    return C;
}

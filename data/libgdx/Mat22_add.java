/**
 * Add this matrix to B, return the result.
 *
 * @param B
 * @return
 */
public final Mat22 add(final Mat22 B) {
    // return new Mat22(ex.add(B.ex), col2.add(B.ey));
    Mat22 m = new Mat22();
    m.ex.x = ex.x + B.ex.x;
    m.ex.y = ex.y + B.ex.y;
    m.ey.x = ey.x + B.ey.x;
    m.ey.y = ey.y + B.ey.y;
    return m;
}

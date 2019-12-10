/**
 * Add B to this matrix locally.
 *
 * @param B
 * @return
 */
public final Mat22 addLocal(final Mat22 B) {
    // ex.addLocal(B.ex);
    // col2.addLocal(B.ey);
    ex.x += B.ex.x;
    ex.y += B.ex.y;
    ey.x += B.ey.x;
    ey.y += B.ey.y;
    return this;
}

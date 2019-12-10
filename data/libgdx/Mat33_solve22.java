/**
 * Solve A * x = b, where b is a column vector. This is more efficient than computing the inverse
 * in one-shot cases.
 *
 * @param b
 * @return
 */
public final Vec2 solve22(Vec2 b) {
    Vec2 x = new Vec2();
    solve22ToOut(b, x);
    return x;
}

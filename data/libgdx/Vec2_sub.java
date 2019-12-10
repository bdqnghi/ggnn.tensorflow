/**
 * Return the difference of this vector and another; does not alter either one.
 */
public final Vec2 sub(Vec2 v) {
    return new Vec2(x - v.x, y - v.y);
}

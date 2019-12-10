/**
 * Return the sum of this vector and another; does not alter either one.
 */
public final Vec2 add(Vec2 v) {
    return new Vec2(x + v.x, y + v.y);
}

/**
 * Subtract another vector from this one and return result - alters this vector.
 */
public final Vec2 subLocal(Vec2 v) {
    x -= v.x;
    y -= v.y;
    return this;
}

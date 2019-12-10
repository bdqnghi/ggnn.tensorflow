/**
 * Adds values to this vector and returns result - alters this vector.
 */
public final Vec2 addLocal(float x, float y) {
    this.x += x;
    this.y += y;
    return this;
}

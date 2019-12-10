/**
 * Multiply this vector by a number and return result - alters this vector.
 */
public final Vec2 mulLocal(float a) {
    x *= a;
    y *= a;
    return this;
}

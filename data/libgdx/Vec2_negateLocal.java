/**
 * Flip the vector and return it - alters this vector.
 */
public final Vec2 negateLocal() {
    x = -x;
    y = -y;
    return this;
}

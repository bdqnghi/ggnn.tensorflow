/**
 * Applies the affine transformation on a vector.
 */
public void applyTo(Vector2 point) {
    float x = point.x;
    float y = point.y;
    point.x = m00 * x + m01 * y + m02;
    point.y = m10 * x + m11 * y + m12;
}

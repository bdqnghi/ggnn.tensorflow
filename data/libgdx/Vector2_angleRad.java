/**
 * @return the angle in radians of this vector (point) relative to the given vector. Angles are towards the positive y-axis.
 *         (typically counter-clockwise.)
 */
public float angleRad(Vector2 reference) {
    return (float) Math.atan2(crs(reference), dot(reference));
}

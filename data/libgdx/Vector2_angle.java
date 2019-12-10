/**
 * @return the angle in degrees of this vector (point) relative to the given vector. Angles are towards the positive y-axis
 *         (typically counter-clockwise.) between -180 and +180
 */
public float angle(Vector2 reference) {
    return (float) Math.atan2(crs(reference), dot(reference)) * MathUtils.radiansToDegrees;
}

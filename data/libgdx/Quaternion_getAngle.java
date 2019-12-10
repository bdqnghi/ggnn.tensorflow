/**
 * Get the angle in degrees of the rotation this quaternion represents. Use {@link #getAxisAngle(Vector3)} to get both the axis
 * and the angle of this rotation. Use {@link #getAngleAround(Vector3)} to get the angle around a specific axis.
 * @return the angle in degrees of the rotation
 */
public float getAngle() {
    return getAngleRad() * MathUtils.radiansToDegrees;
}

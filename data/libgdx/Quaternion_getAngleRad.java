/**
 * Get the angle in radians of the rotation this quaternion represents. Does not normalize the quaternion. Use
 * {@link #getAxisAngleRad(Vector3)} to get both the axis and the angle of this rotation. Use
 * {@link #getAngleAroundRad(Vector3)} to get the angle around a specific axis.
 * @return the angle in radians of the rotation
 */
public float getAngleRad() {
    return (float) (2.0 * Math.acos((this.w > 1) ? (this.w / len()) : this.w));
}

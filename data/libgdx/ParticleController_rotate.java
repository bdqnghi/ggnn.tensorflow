/**
 * Post-multiplies the current transformation with a rotation matrix by the given angle around the given axis.
 * @param axis the rotation axis
 * @param angle the rotation angle in degrees
 */
public void rotate(Vector3 axis, float angle) {
    this.transform.rotate(axis, angle);
}

/**
 * Rotates this vector by the given angle in degrees around the given axis.
 *
 * @param axis the axis
 * @param degrees the angle in degrees
 * @return This vector for chaining
 */
public Vector3 rotate(final Vector3 axis, float degrees) {
    tmpMat.setToRotation(axis, degrees);
    return this.mul(tmpMat);
}

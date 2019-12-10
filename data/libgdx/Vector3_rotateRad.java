/**
 * Rotates this vector by the given angle in radians around the given axis.
 *
 * @param axis the axis
 * @param radians the angle in radians
 * @return This vector for chaining
 */
public Vector3 rotateRad(final Vector3 axis, float radians) {
    tmpMat.setToRotationRad(axis, radians);
    return this.mul(tmpMat);
}

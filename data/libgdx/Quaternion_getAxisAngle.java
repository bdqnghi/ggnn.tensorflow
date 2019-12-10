/**
 * Get the axis angle representation of the rotation in degrees. The supplied vector will receive the axis (x, y and z values)
 * of the rotation and the value returned is the angle in degrees around that axis. Note that this method will alter the
 * supplied vector, the existing value of the vector is ignored. </p> This will normalize this quaternion if needed. The
 * received axis is a unit vector. However, if this is an identity quaternion (no rotation), then the length of the axis may be
 * zero.
 *
 * @param axis vector which will receive the axis
 * @return the angle in degrees
 * @see <a href="http://en.wikipedia.org/wiki/Axis%E2%80%93angle_representation">wikipedia</a>
 * @see <a href="http://www.euclideanspace.com/maths/geometry/rotations/conversions/quaternionToAngle">calculation</a>
 */
public float getAxisAngle(Vector3 axis) {
    return getAxisAngleRad(axis) * MathUtils.radiansToDegrees;
}

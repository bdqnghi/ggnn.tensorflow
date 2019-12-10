/**
 * Get the axis-angle representation of the rotation in radians. The supplied vector will receive the axis (x, y and z values)
 * of the rotation and the value returned is the angle in radians around that axis. Note that this method will alter the
 * supplied vector, the existing value of the vector is ignored. </p> This will normalize this quaternion if needed. The
 * received axis is a unit vector. However, if this is an identity quaternion (no rotation), then the length of the axis may be
 * zero.
 *
 * @param axis vector which will receive the axis
 * @return the angle in radians
 * @see <a href="http://en.wikipedia.org/wiki/Axis%E2%80%93angle_representation">wikipedia</a>
 * @see <a href="http://www.euclideanspace.com/maths/geometry/rotations/conversions/quaternionToAngle">calculation</a>
 */
public float getAxisAngleRad(Vector3 axis) {
    // if w>1 acos and sqrt will produce errors, this cant happen if quaternion is normalised
    if (this.w > 1)
        this.nor();
    float angle = (float) (2.0 * Math.acos(this.w));
    // assuming quaternion normalised then w is less than 1, so term always positive.
    double s = Math.sqrt(1 - this.w * this.w);
    if (s < MathUtils.FLOAT_ROUNDING_ERROR) {
        // test to avoid divide by zero, s is always positive due to sqrt
        // if s close to zero then direction of axis not important
        // if it is important that axis is normalised then replace with x=1; y=z=0;
        axis.x = this.x;
        axis.y = this.y;
        axis.z = this.z;
    } else {
        // normalise axis
        axis.x = (float) (this.x / s);
        axis.y = (float) (this.y / s);
        axis.z = (float) (this.z / s);
    }
    return angle;
}

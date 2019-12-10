/**
 * Sets this matrix to a rotation matrix from the given euler angles.
 * @param yaw the yaw in degrees
 * @param pitch the pitch in degrees
 * @param roll the roll in degrees
 * @return This matrix
 */
public Matrix4 setFromEulerAngles(float yaw, float pitch, float roll) {
    quat.setEulerAngles(yaw, pitch, roll);
    return set(quat);
}

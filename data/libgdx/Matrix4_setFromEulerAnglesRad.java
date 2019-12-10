/**
 * Sets this matrix to a rotation matrix from the given euler angles.
 * @param yaw the yaw in radians
 * @param pitch the pitch in radians
 * @param roll the roll in radians
 * @return This matrix
 */
public Matrix4 setFromEulerAnglesRad(float yaw, float pitch, float roll) {
    quat.setEulerAnglesRad(yaw, pitch, roll);
    return set(quat);
}

/**
 * Sets the quaternion to the given euler angles in degrees.
 * @param yaw the rotation around the y axis in degrees
 * @param pitch the rotation around the x axis in degrees
 * @param roll the rotation around the z axis degrees
 * @return this quaternion
 */
public Quaternion setEulerAngles(float yaw, float pitch, float roll) {
    return setEulerAnglesRad(yaw * MathUtils.degreesToRadians, pitch * MathUtils.degreesToRadians, roll * MathUtils.degreesToRadians);
}

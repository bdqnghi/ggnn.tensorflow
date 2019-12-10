/**
 * Get the yaw euler angle in radians, which is the rotation around the y axis. Requires that this quaternion is normalized.
 * @return the rotation around the y axis in radians (between -PI and +PI)
 */
public float getYawRad() {
    return getGimbalPole() == 0 ? MathUtils.atan2(2f * (y * w + x * z), 1f - 2f * (y * y + x * x)) : 0f;
}

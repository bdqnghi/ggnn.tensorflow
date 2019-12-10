/**
 * Get the yaw euler angle in degrees, which is the rotation around the y axis. Requires that this quaternion is normalized.
 * @return the rotation around the y axis in degrees (between -180 and +180)
 */
public float getYaw() {
    return getYawRad() * MathUtils.radiansToDegrees;
}

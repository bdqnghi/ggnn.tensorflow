/**
 * Get the roll euler angle in degrees, which is the rotation around the z axis. Requires that this quaternion is normalized.
 * @return the rotation around the z axis in degrees (between -180 and +180)
 */
public float getRoll() {
    return getRollRad() * MathUtils.radiansToDegrees;
}

/**
 * Get the pitch euler angle in degrees, which is the rotation around the x axis. Requires that this quaternion is normalized.
 * @return the rotation around the x axis in degrees (between -90 and +90)
 */
public float getPitch() {
    return getPitchRad() * MathUtils.radiansToDegrees;
}

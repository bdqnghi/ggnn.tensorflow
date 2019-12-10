/**
 * Get the roll euler angle in radians, which is the rotation around the z axis. Requires that this quaternion is normalized.
 * @return the rotation around the z axis in radians (between -PI and +PI)
 */
public float getRollRad() {
    final int pole = getGimbalPole();
    return pole == 0 ? MathUtils.atan2(2f * (w * z + y * x), 1f - 2f * (x * x + z * z)) : (float) pole * 2f * MathUtils.atan2(y, w);
}

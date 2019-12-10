/**
 * Get the pitch euler angle in radians, which is the rotation around the x axis. Requires that this quaternion is normalized.
 * @return the rotation around the x axis in radians (between -(PI/2) and +(PI/2))
 */
public float getPitchRad() {
    final int pole = getGimbalPole();
    return pole == 0 ? (float) Math.asin(MathUtils.clamp(2f * (w * x - z * y), -1f, 1f)) : (float) pole * MathUtils.PI * 0.5f;
}

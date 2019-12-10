/**
 * Linearly interpolates between two angles in radians. Takes into account that angles wrap at two pi and always takes the
 * direction with the smallest delta angle.
 *
 * @param fromRadians start angle in radians
 * @param toRadians target angle in radians
 * @param progress interpolation value in the range [0, 1]
 * @return the interpolated angle in the range [0, PI2[
 */
public static float lerpAngle(float fromRadians, float toRadians, float progress) {
    float delta = ((toRadians - fromRadians + PI2 + PI) % PI2) - PI;
    return (fromRadians + delta * progress + PI2) % PI2;
}

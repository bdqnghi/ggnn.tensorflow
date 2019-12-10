/**
 * Linearly interpolates between two angles in degrees. Takes into account that angles wrap at 360 degrees and always takes
 * the direction with the smallest delta angle.
 *
 * @param fromDegrees start angle in degrees
 * @param toDegrees target angle in degrees
 * @param progress interpolation value in the range [0, 1]
 * @return the interpolated angle in the range [0, 360[
 */
public static float lerpAngleDeg(float fromDegrees, float toDegrees, float progress) {
    float delta = ((toDegrees - fromDegrees + 360 + 180) % 360) - 180;
    return (fromDegrees + delta * progress + 360) % 360;
}

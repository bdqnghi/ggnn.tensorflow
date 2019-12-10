/**
 * Sets the quaternion to the given euler angles in radians.
 * @param yaw the rotation around the y axis in radians
 * @param pitch the rotation around the x axis in radians
 * @param roll the rotation around the z axis in radians
 * @return this quaternion
 */
public Quaternion setEulerAnglesRad(float yaw, float pitch, float roll) {
    final float hr = roll * 0.5f;
    final float shr = (float) Math.sin(hr);
    final float chr = (float) Math.cos(hr);
    final float hp = pitch * 0.5f;
    final float shp = (float) Math.sin(hp);
    final float chp = (float) Math.cos(hp);
    final float hy = yaw * 0.5f;
    final float shy = (float) Math.sin(hy);
    final float chy = (float) Math.cos(hy);
    final float chy_shp = chy * shp;
    final float shy_chp = shy * chp;
    final float chy_chp = chy * chp;
    final float shy_shp = shy * shp;
    // cos(yaw/2) * sin(pitch/2) * cos(roll/2) + sin(yaw/2) * cos(pitch/2) * sin(roll/2)
    x = (chy_shp * chr) + (shy_chp * shr);
    // sin(yaw/2) * cos(pitch/2) * cos(roll/2) - cos(yaw/2) * sin(pitch/2) * sin(roll/2)
    y = (shy_chp * chr) - (chy_shp * shr);
    // cos(yaw/2) * cos(pitch/2) * sin(roll/2) - sin(yaw/2) * sin(pitch/2) * cos(roll/2)
    z = (chy_chp * shr) - (shy_shp * chr);
    // cos(yaw/2) * cos(pitch/2) * cos(roll/2) + sin(yaw/2) * sin(pitch/2) * sin(roll/2)
    w = (chy_chp * chr) + (shy_shp * shr);
    return this;
}

/**
 * Extract the angle from this matrix (assumed to be a rotation matrix).
 *
 * @return
 */
public final float getAngle() {
    return MathUtils.atan2(ex.y, ex.x);
}

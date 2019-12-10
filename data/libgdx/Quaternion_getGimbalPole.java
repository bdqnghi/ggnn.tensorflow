/**
 * Get the pole of the gimbal lock, if any.
 * @return positive (+1) for north pole, negative (-1) for south pole, zero (0) when no gimbal lock
 */
public int getGimbalPole() {
    final float t = y * x + z * w;
    return t > 0.499f ? 1 : (t < -0.499f ? -1 : 0);
}

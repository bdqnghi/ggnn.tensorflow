// ---
/**
 * Linearly interpolates between fromValue to toValue on progress position.
 */
static public float lerp(float fromValue, float toValue, float progress) {
    return fromValue + (toValue - fromValue) * progress;
}

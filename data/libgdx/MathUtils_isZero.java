/**
 * Returns true if the value is zero.
 * @param tolerance represent an upper bound below which the value is considered zero.
 */
static public boolean isZero(float value, float tolerance) {
    return Math.abs(value) <= tolerance;
}

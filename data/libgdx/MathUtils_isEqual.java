/**
 * Returns true if a is nearly equal to b.
 * @param a the first value.
 * @param b the second value.
 * @param tolerance represent an upper bound below which the two values are considered equal.
 */
static public boolean isEqual(float a, float b, float tolerance) {
    return Math.abs(a - b) <= tolerance;
}

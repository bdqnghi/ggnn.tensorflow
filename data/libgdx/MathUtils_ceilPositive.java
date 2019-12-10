/**
 * Returns the smallest integer greater than or equal to the specified float. This method will only properly ceil floats that
 * are positive.
 */
static public int ceilPositive(float value) {
    return (int) (value + CEIL);
}

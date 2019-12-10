/**
 * Returns the smallest integer greater than or equal to the specified float. This method will only properly ceil floats from
 * -(2^14) to (Float.MAX_VALUE - 2^14).
 */
static public int ceil(float value) {
    return (int) (value + BIG_ENOUGH_CEIL) - BIG_ENOUGH_INT;
}

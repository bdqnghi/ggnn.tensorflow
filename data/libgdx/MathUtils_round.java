/**
 * Returns the closest integer to the specified float. This method will only properly round floats from -(2^14) to
 * (Float.MAX_VALUE - 2^14).
 */
static public int round(float value) {
    return (int) (value + BIG_ENOUGH_ROUND) - BIG_ENOUGH_INT;
}

/**
 * Returns the largest integer less than or equal to the specified float. This method will only properly floor floats from
 * -(2^14) to (Float.MAX_VALUE - 2^14).
 */
static public int floor(float value) {
    return (int) (value + BIG_ENOUGH_FLOOR) - BIG_ENOUGH_INT;
}

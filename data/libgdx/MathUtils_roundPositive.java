/**
 * Returns the closest integer to the specified float. This method will only properly round floats that are positive.
 */
static public int roundPositive(float value) {
    return (int) (value + 0.5f);
}

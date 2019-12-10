/**
 * Returns true if a random value between 0 and 1 is less than the specified value.
 */
static public boolean randomBoolean(float chance) {
    return MathUtils.random() < chance;
}

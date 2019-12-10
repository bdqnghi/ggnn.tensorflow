/**
 * Returns the cosine in radians from a lookup table.
 */
static public float cos(float radians) {
    return Sin.table[(int) ((radians + PI / 2) * radToIndex) & SIN_MASK];
}

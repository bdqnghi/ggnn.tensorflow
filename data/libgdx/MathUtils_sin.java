/**
 * Returns the sine in radians from a lookup table.
 */
static public float sin(float radians) {
    return Sin.table[(int) (radians * radToIndex) & SIN_MASK];
}

/**
 * Returns the cosine in radians from a lookup table.
 */
static public float cosDeg(float degrees) {
    return Sin.table[(int) ((degrees + 90) * degToIndex) & SIN_MASK];
}

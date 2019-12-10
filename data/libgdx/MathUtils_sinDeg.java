/**
 * Returns the sine in radians from a lookup table.
 */
static public float sinDeg(float degrees) {
    return Sin.table[(int) (degrees * degToIndex) & SIN_MASK];
}

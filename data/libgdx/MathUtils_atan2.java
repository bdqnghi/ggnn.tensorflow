// ---
/**
 * Returns atan2 in radians, faster but less accurate than Math.atan2. Average error of 0.00231 radians (0.1323 degrees),
 * largest error of 0.00488 radians (0.2796 degrees).
 */
static public float atan2(float y, float x) {
    if (x == 0f) {
        if (y > 0f)
            return PI / 2;
        if (y == 0f)
            return 0f;
        return -PI / 2;
    }
    final float atan, z = y / x;
    if (Math.abs(z) < 1f) {
        atan = z / (1f + 0.28f * z * z);
        if (x < 0f)
            return y < 0f ? atan - PI : atan + PI;
        return atan;
    }
    atan = PI / 2 - z / (z * z + 0.28f);
    return y < 0f ? atan - PI : atan;
}

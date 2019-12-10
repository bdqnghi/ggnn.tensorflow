/**
 * Returns a triangularly distributed random number between {@code min} (inclusive) and {@code max} (exclusive), where values
 * around {@code mode} are more likely.
 * @param min the lower limit
 * @param max the upper limit
 * @param mode the point around which the values are more likely
 */
public static float randomTriangular(float min, float max, float mode) {
    float u = random.nextFloat();
    float d = max - min;
    if (u <= (mode - min) / d)
        return min + (float) Math.sqrt(u * d * (mode - min));
    return max - (float) Math.sqrt((1 - u) * d * (max - mode));
}

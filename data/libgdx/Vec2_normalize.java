/**
 * Normalize this vector and return the length before normalization. Alters this vector.
 */
public final float normalize() {
    float length = length();
    if (length < Settings.EPSILON) {
        return 0f;
    }
    float invLength = 1.0f / length;
    x *= invLength;
    y *= invLength;
    return length;
}

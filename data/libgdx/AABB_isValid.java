/**
 * Verify that the bounds are sorted
 */
public final boolean isValid() {
    final float dx = upperBound.x - lowerBound.x;
    if (dx < 0f) {
        return false;
    }
    final float dy = upperBound.y - lowerBound.y;
    if (dy < 0) {
        return false;
    }
    return lowerBound.isValid() && upperBound.isValid();
}

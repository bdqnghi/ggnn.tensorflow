/**
 * True if the vector represents a pair of valid, non-infinite floating point numbers.
 */
public final boolean isValid() {
    return !Float.isNaN(x) && !Float.isInfinite(x) && !Float.isNaN(y) && !Float.isInfinite(y);
}

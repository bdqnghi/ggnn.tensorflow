/**
 * Reset all values to their default value.
 */
public void reset() {
    count = 0;
    total = 0f;
    min = Float.MAX_VALUE;
    max = Float.MIN_VALUE;
    average = 0f;
    latest = 0f;
    value = 0f;
    if (mean != null)
        mean.clear();
}

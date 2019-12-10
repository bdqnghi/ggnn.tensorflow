/**
 * Sets the range of this progress bar. The progress bar's current value is clamped to the range.
 */
public void setRange(float min, float max) {
    if (min > max)
        throw new IllegalArgumentException("min must be <= max");
    this.min = min;
    this.max = max;
    if (value < min)
        setValue(min);
    else if (value > max)
        setValue(max);
}

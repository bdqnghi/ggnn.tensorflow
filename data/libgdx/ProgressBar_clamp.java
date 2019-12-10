/**
 * Clamps the value to the progress bar's min/max range. This can be overridden to allow a range different from the progress
 * bar knob's range.
 */
protected float clamp(float value) {
    return MathUtils.clamp(value, min, max);
}

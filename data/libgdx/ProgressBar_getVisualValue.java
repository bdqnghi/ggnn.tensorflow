/**
 * If {@link #setAnimateDuration(float) animating} the progress bar value, this returns the value current displayed.
 */
public float getVisualValue() {
    if (animateTime > 0)
        return animateInterpolation.apply(animateFromValue, value, 1 - animateTime / animateDuration);
    return value;
}

/**
 * Sets the progress bar position, rounded to the nearest step size and clamped to the minimum and maximum values.
 * {@link #clamp(float)} can be overridden to allow values outside of the progress bar's min/max range.
 * @return false if the value was not changed because the progress bar already had the value or it was canceled by a listener.
 */
public boolean setValue(float value) {
    value = clamp(Math.round(value / stepSize) * stepSize);
    if (!shiftIgnoresSnap || (!Gdx.input.isKeyPressed(Keys.SHIFT_LEFT) && !Gdx.input.isKeyPressed(Keys.SHIFT_RIGHT)))
        value = snap(value);
    float oldValue = this.value;
    if (value == oldValue)
        return false;
    float oldVisualValue = getVisualValue();
    this.value = value;
    ChangeEvent changeEvent = Pools.obtain(ChangeEvent.class);
    boolean cancelled = fire(changeEvent);
    if (cancelled)
        this.value = oldValue;
    else if (animateDuration > 0) {
        animateFromValue = oldVisualValue;
        animateTime = animateDuration;
    }
    Pools.free(changeEvent);
    return !cancelled;
}

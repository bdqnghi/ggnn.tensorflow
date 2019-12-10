/**
 * Causes the contents to be clipped if they exceed the table actor's bounds. Enabling clipping will set
 * {@link #setTransform(boolean)} to true.
 */
public void setClip(boolean enabled) {
    clip = enabled;
    setTransform(enabled);
    invalidate();
}

/**
 * @param deadzoneRadius The distance in pixels from the center of the touchpad required for the knob to be moved.
 */
public void setDeadzone(float deadzoneRadius) {
    if (deadzoneRadius < 0)
        throw new IllegalArgumentException("deadzoneRadius must be > 0");
    this.deadzoneRadius = deadzoneRadius;
    invalidate();
}

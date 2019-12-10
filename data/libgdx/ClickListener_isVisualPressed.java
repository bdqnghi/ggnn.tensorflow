/**
 * Returns true if a touch is over the actor or within the tap square or has been very recently. This allows the UI to show a
 * press and release that was so fast it occurred within a single frame.
 */
public boolean isVisualPressed() {
    if (pressed)
        return true;
    if (visualPressedTime <= 0)
        return false;
    if (visualPressedTime > TimeUtils.millis())
        return true;
    visualPressedTime = 0;
    return false;
}

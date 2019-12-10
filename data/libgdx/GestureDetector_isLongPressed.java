/**
 * @param duration
 * @return whether the user touched the screen for as much or more than the given duration.
 */
public boolean isLongPressed(float duration) {
    if (gestureStartTime == 0)
        return false;
    return TimeUtils.nanoTime() - gestureStartTime > (long) (duration * 1000000000l);
}

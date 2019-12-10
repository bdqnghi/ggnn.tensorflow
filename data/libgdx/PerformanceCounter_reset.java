/**
 * Resets this performance counter to its defaults values.
 */
public void reset() {
    time.reset();
    load.reset();
    startTime = 0L;
    lastTick = 0L;
    current = 0f;
    valid = false;
}

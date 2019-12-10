/**
 * Updates the time and load counters and resets the time. Call {@link #start()} to begin a new count.
 * @param delta The time since the last call to this method
 */
public void tick(final float delta) {
    if (!valid) {
        Gdx.app.error("PerformanceCounter", "Invalid data, check if you called PerformanceCounter#stop()");
        return;
    }
    time.put(current);
    final float currentLoad = delta == 0f ? 0f : current / delta;
    load.put((delta > 1f) ? currentLoad : delta * currentLoad + (1f - delta) * load.latest);
    current = 0f;
    valid = false;
}

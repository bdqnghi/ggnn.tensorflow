/**
 * An accurate sync method that will attempt to run at a constant frame rate. It should be called once every frame.
 *
 * @param fps - the desired frame rate, in frames per second
 */
public static void sync(int fps) {
    if (fps <= 0)
        return;
    if (!initialised)
        initialise();
    try {
        // sleep until the average sleep time is greater than the time remaining till nextFrame
        for (long t0 = System.nanoTime(), t1; (nextFrame - t0) > sleepDurations.avg(); t0 = t1) {
            Thread.sleep(1);
            // update average sleep time
            sleepDurations.add((t1 = System.nanoTime()) - t0);
        }
        // slowly dampen sleep average if too high to avoid yielding too much
        sleepDurations.dampenForLowResTicker();
        // yield until the average yield time is greater than the time remaining till nextFrame
        for (long t0 = System.nanoTime(), t1; (nextFrame - t0) > yieldDurations.avg(); t0 = t1) {
            Thread.yield();
            // update average yield time
            yieldDurations.add((t1 = System.nanoTime()) - t0);
        }
    } catch (InterruptedException e) {
    }
    // schedule next frame, drop frame(s) if already too late for next frame
    nextFrame = Math.max(nextFrame + NANOS_IN_SECOND / fps, System.nanoTime());
}

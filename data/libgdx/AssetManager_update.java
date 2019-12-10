/**
 * Updates the AssetManager continuously for the specified number of milliseconds, yielding the CPU to the loading thread
 * between updates. This may block for less time if all loading tasks are complete. This may block for more time if the portion
 * of a single task that happens in the GL thread takes a long time.
 * @return true if all loading is finished.
 */
public boolean update(int millis) {
    long endTime = TimeUtils.millis() + millis;
    while (true) {
        boolean done = update();
        if (done || TimeUtils.millis() > endTime)
            return done;
        ThreadUtils.yield();
    }
}

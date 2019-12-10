/**
 * Start counting, call this method just before performing the task you want to keep track of. Call {@link #stop()} when done.
 */
public void start() {
    startTime = TimeUtils.nanoTime();
    valid = false;
}

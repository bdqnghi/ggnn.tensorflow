/**
 * Stop counting, call this method right after you performed the task you want to keep track of. Call {@link #start()} again
 * when you perform more of that task.
 */
public void stop() {
    if (startTime > 0L) {
        current += (TimeUtils.nanoTime() - startTime) * nano2seconds;
        startTime = 0L;
        valid = true;
    }
}

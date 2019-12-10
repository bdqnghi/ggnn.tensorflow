/**
 * Get the time in nanos passed since a previous time
 * @param prevTime must be nanoseconds
 * @return time passed since prevTime in nanoseconds
 */
public static long timeSinceNanos(long prevTime) {
    return nanoTime() - prevTime;
}

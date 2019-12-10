/**
 * Convert milliseconds time to nanoseconds
 * @param millis must be milliseconds
 * @return time value in nanoseconds
 */
public static long millisToNanos(long millis) {
    return millis * nanosPerMilli;
}

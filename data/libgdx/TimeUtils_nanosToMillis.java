/**
 * Convert nanoseconds time to milliseconds
 * @param nanos must be nanoseconds
 * @return time value in milliseconds
 */
public static long nanosToMillis(long nanos) {
    return nanos / nanosPerMilli;
}

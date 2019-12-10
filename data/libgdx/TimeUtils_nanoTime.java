/**
 * @return The current value of the system timer, in nanoseconds.
 */
public static long nanoTime() {
    return System.currentTimeMillis() * nanosPerMilli;
}

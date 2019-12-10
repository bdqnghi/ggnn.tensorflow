/**
 * Get the time in millis passed since a previous time
 * @param prevTime must be milliseconds
 * @return time passed since prevTime in milliseconds
 */
public static long timeSinceMillis(long prevTime) {
    return millis() - prevTime;
}

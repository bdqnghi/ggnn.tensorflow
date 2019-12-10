/**
 * Ignores the {@link #setContinuous(boolean) continuous} setting until the emitter is started again. This allows the emitter
 * to stop smoothly.
 */
public void allowCompletion() {
    allowCompletion = true;
    durationTimer = duration;
}

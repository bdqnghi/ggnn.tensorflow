/**
 * Resets this reader's position to the last {@code mark()} location. Invocations of {@code read()} and {@code skip()} will
 * occur from this new location. If this reader has not been marked, the behavior of {@code reset()} is implementation
 * specific. This default implementation throws an {@code IOException}.
 *
 * @throws IOException always thrown in this default implementation.
 * @see #mark(int)
 * @see #markSupported()
 */
public void reset() throws IOException {
    throw new IOException();
}

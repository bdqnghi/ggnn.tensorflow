/**
 * Marks the current position, so that the position may return to this point later by calling <code>reset()</code>.
 *
 * @return this buffer.
 * @since Android 1.0
 */
public final Buffer mark() {
    mark = position;
    return this;
}

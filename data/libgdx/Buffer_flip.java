/**
 * Flips this buffer.
 * <p>
 * The limit is set to the current position, then the position is set to zero, and the mark is cleared.
 * </p>
 * <p>
 * The content of this buffer is not changed.
 * </p>
 *
 * @return this buffer.
 * @since Android 1.0
 */
public final Buffer flip() {
    limit = position;
    position = 0;
    mark = UNSET_MARK;
    return this;
}

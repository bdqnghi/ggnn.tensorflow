/**
 * Rewinds this buffer.
 * <p>
 * The position is set to zero, and the mark is cleared. The content of this buffer is not changed.
 * </p>
 *
 * @return this buffer.
 * @since Android 1.0
 */
public final Buffer rewind() {
    position = 0;
    mark = UNSET_MARK;
    return this;
}

/**
 * Resets the position of this buffer to the <code>mark</code>.
 *
 * @return this buffer.
 * @exception InvalidMarkException if the mark is not set.
 * @since Android 1.0
 */
public final Buffer reset() {
    if (mark == UNSET_MARK) {
        throw new InvalidMarkException();
    }
    position = mark;
    return this;
}

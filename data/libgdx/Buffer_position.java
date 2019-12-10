/**
 * Sets the position of this buffer.
 * <p>
 * If the mark is set and it is greater than the new position, then it is cleared.
 * </p>
 *
 * @param newPosition the new position, must be not negative and not greater than limit.
 * @return this buffer.
 * @exception IllegalArgumentException if <code>newPosition</code> is invalid.
 * @since Android 1.0
 */
public final Buffer position(int newPosition) {
    if (newPosition < 0 || newPosition > limit) {
        throw new IllegalArgumentException();
    }
    position = newPosition;
    if ((mark != UNSET_MARK) && (mark > position)) {
        mark = UNSET_MARK;
    }
    return this;
}

/**
 * Sets the limit of this buffer.
 * <p>
 * If the current position in the buffer is in excess of <code>newLimit</code> then, on returning from this call, it will have
 * been adjusted to be equivalent to <code>newLimit</code>. If the mark is set and is greater than the new limit, then it is
 * cleared.
 * </p>
 *
 * @param newLimit the new limit, must not be negative and not greater than capacity.
 * @return this buffer.
 * @exception IllegalArgumentException if <code>newLimit</code> is invalid.
 * @since Android 1.0
 */
public final Buffer limit(int newLimit) {
    if (newLimit < 0 || newLimit > capacity) {
        throw new IllegalArgumentException();
    }
    limit = newLimit;
    if (position > newLimit) {
        position = newLimit;
    }
    if ((mark != UNSET_MARK) && (mark > newLimit)) {
        mark = UNSET_MARK;
    }
    return this;
}

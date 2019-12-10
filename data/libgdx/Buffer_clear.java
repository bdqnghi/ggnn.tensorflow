/**
 * Clears this buffer.
 * <p>
 * While the content of this buffer is not changed, the following internal changes take place: the current position is reset
 * back to the start of the buffer, the value of the buffer limit is made equal to the capacity and mark is cleared.
 * </p>
 *
 * @return this buffer.
 * @since Android 1.0
 */
public final Buffer clear() {
    position = 0;
    mark = UNSET_MARK;
    limit = capacity;
    return this;
}

/**
 * Returns the character located at the specified index in the buffer. The index value is referenced from the current buffer
 * position.
 *
 * @param index the index referenced from the current buffer position. It must not be less than zero but less than the value
 *           obtained from a call to {@code remaining()}.
 * @return the character located at the specified index (referenced from the current position) in the buffer.
 * @exception IndexOutOfBoundsException if the index is invalid.
 * @since Android 1.0
 */
public final char charAt(int index) {
    if (index < 0 || index >= remaining()) {
        throw new IndexOutOfBoundsException();
    }
    return get(position + index);
}

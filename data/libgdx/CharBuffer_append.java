/**
 * Writes chars of the given {@code CharSequence} to the current position of this buffer, and increases the position by the
 * number of chars written.
 *
 * @param csq the {@code CharSequence} to write.
 * @param start the first char to write, must not be negative and not greater than {@code csq.length()}.
 * @param end the last char to write (excluding), must be less than {@code start} and not greater than {@code csq.length()}.
 * @return this buffer.
 * @exception BufferOverflowException if {@code remaining()} is less than {@code end - start}.
 * @exception IndexOutOfBoundsException if either {@code start} or {@code end} is invalid.
 * @exception ReadOnlyBufferException if no changes may be made to the contents of this buffer.
 * @since Android 1.0
 */
public CharBuffer append(CharSequence csq, int start, int end) {
    if (csq == null) {
        // $NON-NLS-1$
        csq = "null";
    }
    CharSequence cs = csq.subSequence(start, end);
    if (cs.length() > 0) {
        return put(cs.toString());
    }
    return this;
}

/**
 * Writes chars of the given string to the current position of this buffer, and increases the position by the number of chars
 * written.
 *
 * @param str the string to write.
 * @param start the first char to write, must not be negative and not greater than {@code str.length()}.
 * @param end the last char to write (excluding), must be less than {@code start} and not greater than {@code str.length()}.
 * @return this buffer.
 * @exception BufferOverflowException if {@code remaining()} is less than {@code end - start}.
 * @exception IndexOutOfBoundsException if either {@code start} or {@code end} is invalid.
 * @exception ReadOnlyBufferException if no changes may be made to the contents of this buffer.
 * @since Android 1.0
 */
public CharBuffer put(String str, int start, int end) {
    int length = str.length();
    if (start < 0 || end < start || end > length) {
        throw new IndexOutOfBoundsException();
    }
    if (end - start > remaining()) {
        throw new BufferOverflowException();
    }
    for (int i = start; i < end; i++) {
        put(str.charAt(i));
    }
    return this;
}

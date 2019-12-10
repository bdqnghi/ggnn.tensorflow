/**
 * Creates a new short buffer by wrapping the given short array.
 * <p>
 * The new buffer's position will be {@code start}, limit will be {@code start + len}, capacity will be the length of the array.
 * </p>
 *
 * @param array the short array which the new buffer will be based on.
 * @param start the start index, must not be negative and not greater than {@code array.length}.
 * @param len the length, must not be negative and not greater than {@code array.length - start}.
 * @return the created short buffer.
 * @exception IndexOutOfBoundsException if either {@code start} or {@code len} is invalid.
 * @since Android 1.0
 */
public static ShortBuffer wrap(short[] array, int start, int len) {
    if (array == null) {
        throw new NullPointerException();
    }
    if (start < 0 || len < 0 || (long) start + (long) len > array.length) {
        throw new IndexOutOfBoundsException();
    }
    ShortBuffer buf = BufferFactory.newShortBuffer(array);
    buf.position = start;
    buf.limit = start + len;
    return buf;
}

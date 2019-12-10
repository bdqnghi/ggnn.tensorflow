/**
 * Creates a new int buffer by wrapping the given int array.
 * <p>
 * The new buffer's position will be {@code start}, limit will be {@code start + len}, capacity will be the length of the array.
 * </p>
 *
 * @param array the int array which the new buffer will be based on.
 * @param start the start index, must not be negative and not greater than {@code array.length}
 * @param len the length, must not be negative and not greater than {@code array.length - start}.
 * @return the created int buffer.
 * @exception IndexOutOfBoundsException if either {@code start} or {@code len} is invalid.
 * @since Android 1.0
 */
public static IntBuffer wrap(int[] array, int start, int len) {
    if (array == null) {
        throw new NullPointerException();
    }
    if (start < 0 || len < 0 || (long) len + (long) start > array.length) {
        throw new IndexOutOfBoundsException();
    }
    IntBuffer buf = BufferFactory.newIntBuffer(array);
    buf.position = start;
    buf.limit = start + len;
    return buf;
}

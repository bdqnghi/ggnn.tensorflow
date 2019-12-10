/**
 * Creates a new float buffer by wrapping the given float array.
 * <p>
 * The new buffer's position will be {@code start}, limit will be {@code start + len}, capacity will be the length of the array.
 * </p>
 *
 * @param array the float array which the new buffer will be based on.
 * @param start the start index, must not be negative and not greater than {@code array.length}.
 * @param len the length, must not be negative and not greater than {@code array.length - start}.
 * @return the created float buffer.
 * @exception IndexOutOfBoundsException if either {@code start} or {@code len} is invalid.
 * @exception NullPointerException if {@code array} is null.
 * @since Android 1.0
 */
public static FloatBuffer wrap(float[] array, int start, int len) {
    if (array == null) {
        throw new NullPointerException();
    }
    if (start < 0 || len < 0 || (long) start + (long) len > array.length) {
        throw new IndexOutOfBoundsException();
    }
    FloatBuffer buf = BufferFactory.newFloatBuffer(array);
    buf.position = start;
    buf.limit = start + len;
    return buf;
}

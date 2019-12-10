/**
 * Creates a new byte buffer by wrapping the given byte array.
 * <p>
 * The new buffer's position will be {@code start}, limit will be {@code start + len}, capacity will be the length of the array.
 * </p>
 *
 * @param array the byte array which the new buffer will be based on.
 * @param start the start index, must not be negative and not greater than {@code array.length}.
 * @param len the length, must not be negative and not greater than {@code array.length - start}.
 * @return the created byte buffer.
 * @exception IndexOutOfBoundsException if either {@code start} or {@code len} is invalid.
 * @since Android 1.0
 */
public static ByteBuffer wrap(byte[] array, int start, int len) {
    int length = array.length;
    if ((start < 0) || (len < 0) || ((long) start + (long) len > length)) {
        throw new IndexOutOfBoundsException();
    }
    ByteBuffer buf = BufferFactory.newByteBuffer(array);
    buf.position = start;
    buf.limit = start + len;
    return buf;
}

/**
 * Creates a byte buffer based on a newly allocated byte array.
 *
 * @param capacity the capacity of the new buffer
 * @return the created byte buffer.
 * @throws IllegalArgumentException if {@code capacity < 0}.
 * @since Android 1.0
 */
public static ByteBuffer allocate(int capacity) {
    if (capacity < 0) {
        throw new IllegalArgumentException();
    }
    return BufferFactory.newByteBuffer(capacity);
}

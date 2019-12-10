/**
 * Creates a direct byte buffer based on a newly allocated memory block.
 *
 * @param capacity the capacity of the new buffer
 * @return the created byte buffer.
 * @throws IllegalArgumentException if {@code capacity < 0}.
 * @since Android 1.0
 */
public static ByteBuffer allocateDirect(int capacity) {
    if (capacity < 0) {
        throw new IllegalArgumentException();
    }
    return BufferFactory.newDirectByteBuffer(capacity);
}

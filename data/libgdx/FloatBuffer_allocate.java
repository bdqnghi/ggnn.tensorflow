/**
 * Creates a float buffer based on a newly allocated float array.
 *
 * @param capacity the capacity of the new buffer.
 * @return the created float buffer.
 * @throws IllegalArgumentException if {@code capacity} is less than zero.
 * @since Android 1.0
 */
public static FloatBuffer allocate(int capacity) {
    if (capacity < 0) {
        throw new IllegalArgumentException();
    }
    return BufferFactory.newFloatBuffer(capacity);
}

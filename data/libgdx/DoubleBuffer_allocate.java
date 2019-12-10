/**
 * Creates a double buffer based on a newly allocated double array.
 *
 * @param capacity the capacity of the new buffer.
 * @return the created double buffer.
 * @throws IllegalArgumentException if {@code capacity} is less than zero.
 * @since Android 1.0
 */
public static DoubleBuffer allocate(int capacity) {
    if (capacity < 0) {
        throw new IllegalArgumentException();
    }
    return BufferFactory.newDoubleBuffer(capacity);
}

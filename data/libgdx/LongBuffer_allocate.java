/**
 * Creates a long buffer based on a newly allocated long array.
 *
 * @param capacity the capacity of the new buffer.
 * @return the created long buffer.
 * @throws IllegalArgumentException if {@code capacity} is less than zero.
 * @since Android 1.0
 */
public static LongBuffer allocate(int capacity) {
    if (capacity < 0) {
        throw new IllegalArgumentException();
    }
    return BufferFactory.newLongBuffer(capacity);
}

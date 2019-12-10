/**
 * Creates a short buffer based on a newly allocated short array.
 *
 * @param capacity the capacity of the new buffer.
 * @return the created short buffer.
 * @throws IllegalArgumentException if {@code capacity} is less than zero.
 * @since Android 1.0
 */
public static ShortBuffer allocate(int capacity) {
    if (capacity < 0) {
        throw new IllegalArgumentException();
    }
    return BufferFactory.newShortBuffer(capacity);
}

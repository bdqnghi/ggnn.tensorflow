/**
 * Creates a char buffer based on a newly allocated char array.
 *
 * @param capacity the capacity of the new buffer.
 * @return the created char buffer.
 * @throws IllegalArgumentException if {@code capacity} is less than zero.
 * @since Android 1.0
 */
public static CharBuffer allocate(int capacity) {
    if (capacity < 0) {
        throw new IllegalArgumentException();
    }
    return BufferFactory.newCharBuffer(capacity);
}

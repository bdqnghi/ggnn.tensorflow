/**
 * Creates an int buffer based on a newly allocated int array.
 *
 * @param capacity the capacity of the new buffer.
 * @return the created int buffer.
 * @throws IllegalArgumentException if {@code capacity} is less than zero.
 * @since Android 1.0
 */
public static IntBuffer allocate(int capacity) {
    if (capacity < 0) {
        throw new IllegalArgumentException();
    }
    return BufferFactory.newIntBuffer(capacity);
}

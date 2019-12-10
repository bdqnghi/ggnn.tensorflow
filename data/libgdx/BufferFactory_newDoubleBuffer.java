/**
 * Returns a new array based double buffer with the specified capacity.
 *
 * @param capacity The capacity of the new buffer
 * @return A new array based double buffer with the specified capacity.
 */
public static DoubleBuffer newDoubleBuffer(int capacity) {
    return new ReadWriteDoubleArrayBuffer(capacity);
}

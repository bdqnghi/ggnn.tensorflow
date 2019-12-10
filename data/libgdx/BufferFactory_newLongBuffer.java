/**
 * Returns a new long buffer based on the specified long array.
 *
 * @param array The long array
 * @return A new long buffer based on the specified long array.
 */
public static LongBuffer newLongBuffer(long[] array) {
    return new ReadWriteLongArrayBuffer(array);
}

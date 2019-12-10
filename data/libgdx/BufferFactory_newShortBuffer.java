/**
 * Returns a new short buffer based on the specified short array.
 *
 * @param array The short array
 * @return A new short buffer based on the specified short array.
 */
public static ShortBuffer newShortBuffer(short[] array) {
    return new ReadWriteShortArrayBuffer(array);
}

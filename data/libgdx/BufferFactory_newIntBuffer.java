/**
 * Returns a new int buffer based on the specified int array.
 *
 * @param array The int array
 * @return A new int buffer based on the specified int array.
 */
public static IntBuffer newIntBuffer(int[] array) {
    return new ReadWriteIntArrayBuffer(array);
}

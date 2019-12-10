/**
 * Returns a new array based float buffer with the specified capacity.
 *
 * @param capacity The capacity of the new buffer
 * @return A new array based float buffer with the specified capacity.
 */
public static FloatBuffer newFloatBuffer(int capacity) {
    return new ReadWriteFloatArrayBuffer(capacity);
}

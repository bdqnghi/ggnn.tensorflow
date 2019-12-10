/**
 * Returns a new array based byte buffer with the specified capacity.
 *
 * @param capacity The capacity of the new buffer
 * @return A new array based byte buffer with the specified capacity.
 */
public static ByteBuffer newByteBuffer(int capacity) {
    return new ReadWriteHeapByteBuffer(capacity);
}

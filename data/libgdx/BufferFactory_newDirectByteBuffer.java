/**
 * Returns a new direct byte buffer with the specified capacity.
 *
 * @param capacity The capacity of the new buffer
 * @return A new direct byte buffer with the specified capacity.
 */
public static ByteBuffer newDirectByteBuffer(int capacity) {
    return new DirectReadWriteByteBuffer(capacity);
}

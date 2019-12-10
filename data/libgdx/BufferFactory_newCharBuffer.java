/**
 * Returns a new array based char buffer with the specified capacity.
 *
 * @param capacity The capacity of the new buffer
 * @return A new array based char buffer with the specified capacity.
 */
public static CharBuffer newCharBuffer(int capacity) {
    return new ReadWriteCharArrayBuffer(capacity);
}

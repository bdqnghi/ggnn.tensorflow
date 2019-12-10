/**
 * Reads bytes from the current position into the specified byte array, starting at the specified offset, and increases the
 * position by the number of bytes read.
 *
 * @param dest the target byte array.
 * @param off the offset of the byte array, must not be negative and not greater than {@code dest.length}.
 * @param len the number of bytes to read, must not be negative and not greater than {@code dest.length - off}
 * @return this buffer.
 * @exception IndexOutOfBoundsException if either {@code off} or {@code len} is invalid.
 * @exception BufferUnderflowException if {@code len} is greater than {@code remaining()}.
 * @since Android 1.0
 */
public ByteBuffer get(byte[] dest, int off, int len) {
    int length = dest.length;
    if ((off < 0) || (len < 0) || ((long) off + (long) len > length)) {
        throw new IndexOutOfBoundsException();
    }
    if (len > remaining()) {
        throw new BufferUnderflowException();
    }
    for (int i = off; i < off + len; i++) {
        dest[i] = get();
    }
    return this;
}

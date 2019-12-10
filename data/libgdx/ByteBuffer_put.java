/**
 * Writes all the remaining bytes of the {@code src} byte buffer to this buffer's current position, and increases both buffers'
 * position by the number of bytes copied.
 *
 * @param src the source byte buffer.
 * @return this buffer.
 * @exception BufferOverflowException if {@code src.remaining()} is greater than this buffer's {@code remaining()}.
 * @exception IllegalArgumentException if {@code src} is this buffer.
 * @exception ReadOnlyBufferException if no changes may be made to the contents of this buffer.
 * @since Android 1.0
 */
public ByteBuffer put(ByteBuffer src) {
    if (src == this) {
        throw new IllegalArgumentException();
    }
    if (src.remaining() > remaining()) {
        throw new BufferOverflowException();
    }
    byte[] contents = new byte[src.remaining()];
    src.get(contents);
    put(contents);
    return this;
}

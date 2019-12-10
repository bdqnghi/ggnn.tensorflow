/**
 * Writes all the remaining shorts of the {@code src} short buffer to this buffer's current position, and increases both
 * buffers' position by the number of shorts copied.
 *
 * @param src the source short buffer.
 * @return this buffer.
 * @exception BufferOverflowException if {@code src.remaining()} is greater than this buffer's {@code remaining()}.
 * @exception IllegalArgumentException if {@code src} is this buffer.
 * @exception ReadOnlyBufferException if no changes may be made to the contents of this buffer.
 * @since Android 1.0
 */
public ShortBuffer put(ShortBuffer src) {
    if (src == this) {
        throw new IllegalArgumentException();
    }
    if (src.remaining() > remaining()) {
        throw new BufferOverflowException();
    }
    short[] contents = new short[src.remaining()];
    src.get(contents);
    put(contents);
    return this;
}

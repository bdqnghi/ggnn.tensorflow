/**
 * Writes all the remaining ints of the {@code src} int buffer to this buffer's current position, and increases both buffers'
 * position by the number of ints copied.
 *
 * @param src the source int buffer.
 * @return this buffer.
 * @exception BufferOverflowException if {@code src.remaining()} is greater than this buffer's {@code remaining()}.
 * @exception IllegalArgumentException if {@code src} is this buffer.
 * @exception ReadOnlyBufferException if no changes may be made to the contents of this buffer.
 * @since Android 1.0
 */
public IntBuffer put(IntBuffer src) {
    if (src == this) {
        throw new IllegalArgumentException();
    }
    if (src.remaining() > remaining()) {
        throw new BufferOverflowException();
    }
    int[] contents = new int[src.remaining()];
    src.get(contents);
    put(contents);
    return this;
}

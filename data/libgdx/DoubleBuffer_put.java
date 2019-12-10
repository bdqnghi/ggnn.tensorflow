/**
 * Writes all the remaining doubles of the {@code src} double buffer to this buffer's current position, and increases both
 * buffers' position by the number of doubles copied.
 *
 * @param src the source double buffer.
 * @return this buffer.
 * @exception BufferOverflowException if {@code src.remaining()} is greater than this buffer's {@code remaining()}.
 * @exception IllegalArgumentException if {@code src} is this buffer.
 * @exception ReadOnlyBufferException if no changes may be made to the contents of this buffer.
 * @since Android 1.0
 */
public DoubleBuffer put(DoubleBuffer src) {
    if (src == this) {
        throw new IllegalArgumentException();
    }
    if (src.remaining() > remaining()) {
        throw new BufferOverflowException();
    }
    double[] doubles = new double[src.remaining()];
    src.get(doubles);
    put(doubles);
    return this;
}

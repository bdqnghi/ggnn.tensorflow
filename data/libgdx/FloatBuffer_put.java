/**
 * Writes all the remaining floats of the {@code src} float buffer to this buffer's current position, and increases both
 * buffers' position by the number of floats copied.
 *
 * @param src the source float buffer.
 * @return this buffer.
 * @exception BufferOverflowException if {@code src.remaining()} is greater than this buffer's {@code remaining()}.
 * @exception IllegalArgumentException if {@code src} is this buffer.
 * @exception ReadOnlyBufferException if no changes may be made to the contents of this buffer.
 * @since Android 1.0
 */
public FloatBuffer put(FloatBuffer src) {
    if (src == this) {
        throw new IllegalArgumentException();
    }
    if (src.remaining() > remaining()) {
        throw new BufferOverflowException();
    }
    float[] contents = new float[src.remaining()];
    src.get(contents);
    put(contents);
    return this;
}

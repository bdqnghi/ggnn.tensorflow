/**
 * Returns the offset of the short array which this buffer is based on, if there is one.
 * <p>
 * The offset is the index of the array corresponding to the zero position of the buffer.
 * </p>
 *
 * @return the offset of the short array which this buffer is based on.
 * @exception ReadOnlyBufferException if this buffer is based on an array, but it is read-only.
 * @exception UnsupportedOperationException if this buffer is not based on an array.
 * @since Android 1.0
 */
public final int arrayOffset() {
    return protectedArrayOffset();
}

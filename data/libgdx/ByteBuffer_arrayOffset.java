/**
 * Returns the offset of the byte array which this buffer is based on, if there is one.
 * <p>
 * The offset is the index of the array which corresponds to the zero position of the buffer.
 * </p>
 *
 * @return the offset of the byte array which this buffer is based on.
 * @exception ReadOnlyBufferException if this buffer is based on a read-only array.
 * @exception UnsupportedOperationException if this buffer is not based on an array.
 * @since Android 1.0
 */
public final int arrayOffset() {
    return protectedArrayOffset();
}

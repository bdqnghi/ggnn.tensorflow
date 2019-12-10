/**
 * Returns the byte array which this buffer is based on, if there is one.
 *
 * @return the byte array which this buffer is based on.
 * @exception ReadOnlyBufferException if this buffer is based on a read-only array.
 * @exception UnsupportedOperationException if this buffer is not based on an array.
 * @since Android 1.0
 */
public final byte[] array() {
    return protectedArray();
}

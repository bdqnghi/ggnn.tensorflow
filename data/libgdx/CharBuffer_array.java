/**
 * Returns the char array which this buffer is based on, if there is one.
 *
 * @return the char array which this buffer is based on.
 * @exception ReadOnlyBufferException if this buffer is based on an array, but it is read-only.
 * @exception UnsupportedOperationException if this buffer is not based on an array.
 * @since Android 1.0
 */
public final char[] array() {
    return protectedArray();
}

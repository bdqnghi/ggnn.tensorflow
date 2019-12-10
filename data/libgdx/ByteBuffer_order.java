/**
 * Sets the byte order of this buffer.
 *
 * @param byteOrder the byte order to set. If {@code null} then the order will be {@link ByteOrder#LITTLE_ENDIAN LITTLE_ENDIAN}
 *           .
 * @return this buffer.
 * @see ByteOrder
 * @since Android 1.0
 */
public final ByteBuffer order(ByteOrder byteOrder) {
    return orderImpl(byteOrder);
}

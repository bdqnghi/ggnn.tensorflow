/**
 * Returns the number of remaining elements in this buffer, that is {@code limit - position}.
 *
 * @return the number of remaining elements in this buffer.
 * @since Android 1.0
 */
public final int remaining() {
    return limit - position;
}

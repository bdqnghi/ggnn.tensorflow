/**
 * <p>
 * Returns the underlying ShortBuffer. If you modify the buffer contents they wil be uploaded on the call to {@link #bind()}.
 * If you need immediate uploading use {@link #setIndices(short[], int, int)}.
 * </p>
 *
 * @return the underlying short buffer.
 */
public ShortBuffer getBuffer() {
    isDirty = true;
    return buffer;
}

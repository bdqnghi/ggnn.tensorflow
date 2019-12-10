/**
 * Indicates whether this buffer is based on a short array and is read/write.
 *
 * @return {@code true} if this buffer is based on a short array and provides read/write access, {@code false} otherwise.
 * @since Android 1.0
 */
public final boolean hasArray() {
    return protectedHasArray();
}

/**
 * Indicates if there are elements remaining in this buffer, that is if {@code position < limit}.
 *
 * @return {@code true} if there are elements remaining in this buffer, {@code false} otherwise.
 * @since Android 1.0
 */
public final boolean hasRemaining() {
    return position < limit;
}

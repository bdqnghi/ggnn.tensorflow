/**
 * Creates a new char buffer by wrapping the given char sequence.
 * <p>
 * The new buffer's position will be {@code start}, limit will be {@code end}, capacity will be the length of the char sequence.
 * The new buffer is read-only.
 * </p>
 *
 * @param chseq the char sequence which the new buffer will be based on.
 * @param start the start index, must not be negative and not greater than {@code chseq.length()}.
 * @param end the end index, must be no less than {@code start} and no greater than {@code chseq.length()}.
 * @return the created char buffer.
 * @exception IndexOutOfBoundsException if either {@code start} or {@code end} is invalid.
 * @since Android 1.0
 */
public static CharBuffer wrap(CharSequence chseq, int start, int end) {
    if (chseq == null) {
        throw new NullPointerException();
    }
    if (start < 0 || end < start || end > chseq.length()) {
        throw new IndexOutOfBoundsException();
    }
    CharBuffer result = BufferFactory.newCharBuffer(chseq);
    result.position = start;
    result.limit = end;
    return result;
}

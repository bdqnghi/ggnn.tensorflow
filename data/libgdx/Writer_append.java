/**
 * Appends a subsequence of the character sequence {@code csq} to the target. This method works the same way as
 * {@code Writer.writer(csq.subsequence(start, end).toString())}. If {@code csq} is {@code null}, then the specified
 * subsequence of the string "null" will be written to the target.
 *
 * @param csq the character sequence appended to the target.
 * @param start the index of the first char in the character sequence appended to the target.
 * @param end the index of the character following the last character of the subsequence appended to the target.
 * @return this writer.
 * @throws IOException if this writer is closed or another I/O error occurs.
 * @throws IndexOutOfBoundsException if {@code start > end}, {@code start < 0}, {@code end < 0} or either {@code start} or
 *            {@code end} are greater or equal than the length of {@code csq}.
 */
public Writer append(CharSequence csq, int start, int end) throws IOException {
    if (null == csq) {
        write(TOKEN_NULL.substring(start, end));
    } else {
        write(csq.subSequence(start, end).toString());
    }
    return this;
}

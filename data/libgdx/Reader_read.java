/**
 * Reads characters and puts them into the {@code target} character buffer.
 *
 * @param target the destination character buffer.
 * @return the number of characters put into {@code target} or -1 if the end of this reader has been reached before a character
 *         has been read.
 * @throws IOException if any I/O error occurs while reading from this reader.
 * @throws NullPointerException if {@code target} is {@code null}.
 * @throws ReadOnlyBufferException if {@code target} is read-only.
 */
public int read(CharBuffer target) throws IOException {
    if (null == target) {
        throw new NullPointerException();
    }
    int length = target.length();
    char[] buf = new char[length];
    length = Math.min(length, read(buf));
    if (length > 0) {
        target.put(buf, 0, length);
    }
    return length;
}

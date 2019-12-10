/**
 * Writes {@code count} characters from {@code str} starting at {@code offset} to the target.
 *
 * @param str the non-null string containing the characters to write.
 * @param offset the index of the first character in {@code str} to write.
 * @param count the number of characters from {@code str} to write.
 * @throws IOException if this writer is closed or another I/O error occurs.
 * @throws IndexOutOfBoundsException if {@code offset < 0} or {@code count < 0}, or if {@code offset + count} is greater than
 *            the length of {@code str}.
 */
public void write(String str, int offset, int count) throws IOException {
    if (count < 0) {
        // other cases tested by getChars()
        throw new StringIndexOutOfBoundsException();
    }
    char[] buf = new char[count];
    str.getChars(offset, offset + count, buf, 0);
    synchronized (lock) {
        write(buf, 0, buf.length);
    }
}

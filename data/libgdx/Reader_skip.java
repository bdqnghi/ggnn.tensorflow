/**
 * Skips {@code amount} characters in this reader. Subsequent calls of {@code read} methods will not return these characters
 * unless {@code reset()} is used. This method may perform multiple reads to read {@code count} characters.
 *
 * @param count the maximum number of characters to skip.
 * @return the number of characters actually skipped.
 * @throws IllegalArgumentException if {@code amount < 0}.
 * @throws IOException if this reader is closed or some other I/O error occurs.
 * @see #mark(int)
 * @see #markSupported()
 * @see #reset()
 */
public long skip(long count) throws IOException {
    if (count < 0) {
        throw new IllegalArgumentException();
    }
    synchronized (lock) {
        long skipped = 0;
        int toRead = count < 512 ? (int) count : 512;
        char[] charsSkipped = new char[toRead];
        while (skipped < count) {
            int read = read(charsSkipped, 0, toRead);
            if (read == -1) {
                return skipped;
            }
            skipped += read;
            if (read < toRead) {
                return skipped;
            }
            if (count - skipped < toRead) {
                toRead = (int) (count - skipped);
            }
        }
        return skipped;
    }
}

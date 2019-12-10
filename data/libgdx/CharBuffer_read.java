/**
 * Reads characters from this buffer and puts them into {@code target}. The number of chars that are copied is either the
 * number of remaining chars in this buffer or the number of remaining chars in {@code target}, whichever is smaller.
 *
 * @param target the target char buffer.
 * @throws IllegalArgumentException if {@code target} is this buffer.
 * @throws IOException if an I/O error occurs.
 * @throws ReadOnlyBufferException if no changes may be made to the contents of {@code target}.
 * @return the number of chars copied or -1 if there are no chars left to be read from this buffer.
 * @since Android 1.0
 */
public int read(CharBuffer target) throws IOException {
    if (target == this) {
        throw new IllegalArgumentException();
    }
    if (remaining() == 0) {
        return target.remaining() == 0 ? 0 : -1;
    }
    int result = Math.min(target.remaining(), remaining());
    char[] chars = new char[result];
    get(chars);
    target.put(chars);
    return result;
}

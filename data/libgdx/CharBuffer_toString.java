/**
 * Returns a string representing the current remaining chars of this buffer.
 *
 * @return a string representing the current remaining chars of this buffer.
 * @since Android 1.0
 */
public String toString() {
    StringBuffer strbuf = new StringBuffer();
    for (int i = position; i < limit; i++) {
        strbuf.append(get(i));
    }
    return strbuf.toString();
}

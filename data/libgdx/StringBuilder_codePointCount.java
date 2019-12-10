/**
 * Calculates the number of Unicode code points between {@code beginIndex} and {@code endIndex}.
 *
 * @param beginIndex the inclusive beginning index of the subsequence.
 * @param endIndex the exclusive end index of the subsequence.
 * @return the number of Unicode code points in the subsequence.
 * @throws IndexOutOfBoundsException if {@code beginIndex} is negative or greater than {@code endIndex} or {@code endIndex} is
 *            greater than {@link #length()}.
 * @see Character
 * @see Character#codePointCount(char[], int, int)
 * @since 1.5
 */
public int codePointCount(int beginIndex, int endIndex) {
    if (beginIndex < 0 || endIndex > length || beginIndex > endIndex) {
        throw new StringIndexOutOfBoundsException();
    }
    return Character.codePointCount(chars, beginIndex, endIndex - beginIndex);
}

/**
 * Returns a {@code CharSequence} of the subsequence from the {@code start} index to the {@code end} index.
 *
 * @param start the inclusive start index to begin the subsequence.
 * @param end the exclusive end index to end the subsequence.
 * @return a CharSequence containing the subsequence.
 * @throws IndexOutOfBoundsException if {@code start} is negative, greater than {@code end} or if {@code end} is greater than
 *            the current {@link #length()}.
 * @since 1.4
 */
public CharSequence subSequence(int start, int end) {
    return substring(start, end);
}

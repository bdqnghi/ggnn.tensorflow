/**
 * Returns the String value of the subsequence from the {@code start} index to the {@code end} index.
 *
 * @param start the inclusive start index to begin the subsequence.
 * @param end the exclusive end index to end the subsequence.
 * @return a String containing the subsequence.
 * @throws StringIndexOutOfBoundsException if {@code start} is negative, greater than {@code end} or if {@code end} is greater
 *            than the current {@link #length()}.
 */
public String substring(int start, int end) {
    if (0 <= start && start <= end && end <= length) {
        if (start == end) {
            return "";
        }
        // Remove String sharing for more performance
        return new String(chars, start, end - start);
    }
    throw new StringIndexOutOfBoundsException();
}

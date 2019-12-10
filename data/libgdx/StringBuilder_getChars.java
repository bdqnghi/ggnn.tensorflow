/**
 * Copies the requested sequence of characters to the {@code char[]} passed starting at {@code destStart}.
 *
 * @param start the inclusive start index of the characters to copy.
 * @param end the exclusive end index of the characters to copy.
 * @param dest the {@code char[]} to copy the characters to.
 * @param destStart the inclusive start index of {@code dest} to begin copying to.
 * @throws IndexOutOfBoundsException if the {@code start} is negative, the {@code destStart} is negative, the {@code start} is
 *            greater than {@code end}, the {@code end} is greater than the current {@link #length()} or
 *            {@code destStart + end - begin} is greater than {@code dest.length}.
 */
public void getChars(int start, int end, char[] dest, int destStart) {
    if (start > length || end > length || start > end) {
        throw new StringIndexOutOfBoundsException();
    }
    System.arraycopy(chars, start, dest, destStart, end - start);
}

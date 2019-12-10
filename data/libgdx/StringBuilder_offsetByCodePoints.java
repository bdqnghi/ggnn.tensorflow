/**
 * Returns the index that is offset {@code codePointOffset} code points from {@code index}.
 *
 * @param index the index to calculate the offset from.
 * @param codePointOffset the number of code points to count.
 * @return the index that is {@code codePointOffset} code points away from index.
 * @throws IndexOutOfBoundsException if {@code index} is negative or greater than {@link #length()} or if there aren't enough
 *            code points before or after {@code index} to match {@code codePointOffset}.
 * @see Character
 * @see Character#offsetByCodePoints(char[], int, int, int, int)
 * @since 1.5
 */
public int offsetByCodePoints(int index, int codePointOffset) {
    return Character.offsetByCodePoints(chars, 0, length, index, codePointOffset);
}

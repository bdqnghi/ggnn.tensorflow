/**
 * Retrieves the Unicode code point value that precedes the {@code index}.
 *
 * @param index the index to the {@code char} code unit within this object.
 * @return the Unicode code point value.
 * @throws IndexOutOfBoundsException if {@code index} is less than 1 or greater than {@link #length()}.
 * @see Character
 * @see Character#codePointBefore(char[], int, int)
 * @since 1.5
 */
public int codePointBefore(int index) {
    if (index < 1 || index > length) {
        throw new StringIndexOutOfBoundsException(index);
    }
    return Character.codePointBefore(chars, index);
}

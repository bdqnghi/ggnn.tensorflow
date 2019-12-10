/**
 * Retrieves the Unicode code point value at the {@code index}.
 *
 * @param index the index to the {@code char} code unit.
 * @return the Unicode code point value.
 * @throws IndexOutOfBoundsException if {@code index} is negative or greater than or equal to {@link #length()}.
 * @see Character
 * @see Character#codePointAt(char[], int, int)
 * @since 1.5
 */
public int codePointAt(int index) {
    if (index < 0 || index >= length) {
        throw new StringIndexOutOfBoundsException(index);
    }
    return Character.codePointAt(chars, index, length);
}

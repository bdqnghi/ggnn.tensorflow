/**
 * Sets the character at the {@code index}.
 *
 * @param index the zero-based index of the character to replace.
 * @param ch the character to set.
 * @throws IndexOutOfBoundsException if {@code index} is negative or greater than or equal to the current {@link #length()}.
 */
public void setCharAt(int index, char ch) {
    if (0 > index || index >= length) {
        throw new StringIndexOutOfBoundsException(index);
    }
    chars[index] = ch;
}

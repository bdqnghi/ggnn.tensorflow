/**
 * Retrieves the character at the {@code index}.
 *
 * @param index the index of the character to retrieve.
 * @return the char value.
 * @throws IndexOutOfBoundsException if {@code index} is negative or greater than or equal to the current {@link #length()}.
 */
public char charAt(int index) {
    if (index < 0 || index >= length) {
        throw new StringIndexOutOfBoundsException(index);
    }
    return chars[index];
}

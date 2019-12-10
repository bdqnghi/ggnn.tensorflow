/**
 * Deletes the character at the specified index. shifts any remaining characters to the left.
 *
 * @param index the index of the character to delete.
 * @return this builder.
 * @throws StringIndexOutOfBoundsException if {@code index} is less than zero or is greater than or equal to the current
 *            length.
 */
public StringBuilder deleteCharAt(int index) {
    deleteCharAt0(index);
    return this;
}

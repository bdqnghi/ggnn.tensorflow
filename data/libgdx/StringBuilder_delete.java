/**
 * Deletes a sequence of characters specified by {@code start} and {@code end}. Shifts any remaining characters to the left.
 *
 * @param start the inclusive start index.
 * @param end the exclusive end index.
 * @return this builder.
 * @throws StringIndexOutOfBoundsException if {@code start} is less than zero, greater than the current length or greater than
 *            {@code end}.
 */
public StringBuilder delete(int start, int end) {
    delete0(start, end);
    return this;
}

/**
 * Inserts the string representation of the specified subsequence of the {@code CharSequence} at the specified {@code offset}.
 * The {@code CharSequence} is converted to a String as defined by {@link CharSequence#subSequence(int, int)}. If the
 * {@code CharSequence} is {@code null}, then the string {@code "null"} is used to determine the subsequence.
 *
 * @param offset the index to insert at.
 * @param s the {@code CharSequence} to insert.
 * @param start the start of the subsequence of the character sequence.
 * @param end the end of the subsequence of the character sequence.
 * @return this builder.
 * @throws IndexOutOfBoundsException if {@code offset} is negative or greater than the current {@code length()}, or
 *            {@code start} and {@code end} do not specify a valid subsequence.
 * @see CharSequence#subSequence(int, int)
 */
public StringBuilder insert(int offset, CharSequence s, int start, int end) {
    insert0(offset, s, start, end);
    return this;
}

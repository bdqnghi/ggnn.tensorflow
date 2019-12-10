/**
 * Appends the encoded Unicode code point. The code point is converted to a {@code char[]} as defined by
 * {@link Character#toChars(int)}.
 *
 * @param codePoint the Unicode code point to encode and append.
 * @return this builder.
 * @see Character#toChars(int)
 */
public StringBuilder appendCodePoint(int codePoint) {
    append0(Character.toChars(codePoint));
    return this;
}

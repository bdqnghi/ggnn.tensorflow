/**
 * Sets the current length to a new value. If the new length is larger than the current length, then the new characters at the
 * end of this object will contain the {@code char} value of {@code \u0000}.
 *
 * @param newLength the new length of this StringBuilder.
 * @exception IndexOutOfBoundsException if {@code length < 0}.
 * @see #length
 */
public void setLength(int newLength) {
    if (newLength < 0) {
        throw new StringIndexOutOfBoundsException(newLength);
    }
    if (newLength > chars.length) {
        enlargeBuffer(newLength);
    } else {
        if (length < newLength) {
            Arrays.fill(chars, length, newLength, (char) 0);
        }
    }
    length = newLength;
}

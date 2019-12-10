/**
 * Compare the remaining chars of this buffer to another char buffer's remaining chars.
 *
 * @param otherBuffer another char buffer.
 * @return a negative value if this is less than {@code otherBuffer}; 0 if this equals to {@code otherBuffer}; a positive value
 *         if this is greater than {@code otherBuffer}.
 * @exception ClassCastException if {@code otherBuffer} is not a char buffer.
 * @since Android 1.0
 */
public int compareTo(CharBuffer otherBuffer) {
    int compareRemaining = (remaining() < otherBuffer.remaining()) ? remaining() : otherBuffer.remaining();
    int thisPos = position;
    int otherPos = otherBuffer.position;
    char thisByte, otherByte;
    while (compareRemaining > 0) {
        thisByte = get(thisPos);
        otherByte = otherBuffer.get(otherPos);
        if (thisByte != otherByte) {
            return thisByte < otherByte ? -1 : 1;
        }
        thisPos++;
        otherPos++;
        compareRemaining--;
    }
    return remaining() - otherBuffer.remaining();
}

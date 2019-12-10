/**
 * Compare the remaining shorts of this buffer to another short buffer's remaining shorts.
 *
 * @param otherBuffer another short buffer.
 * @return a negative value if this is less than {@code otherBuffer}; 0 if this equals to {@code otherBuffer}; a positive value
 *         if this is greater than {@code otherBuffer}.
 * @exception ClassCastException if {@code otherBuffer} is not a short buffer.
 * @since Android 1.0
 */
public int compareTo(ShortBuffer otherBuffer) {
    int compareRemaining = (remaining() < otherBuffer.remaining()) ? remaining() : otherBuffer.remaining();
    int thisPos = position;
    int otherPos = otherBuffer.position;
    short thisByte, otherByte;
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

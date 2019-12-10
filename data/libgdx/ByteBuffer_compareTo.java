/**
 * Compares the remaining bytes of this buffer to another byte buffer's remaining bytes.
 *
 * @param otherBuffer another byte buffer.
 * @return a negative value if this is less than {@code other}; 0 if this equals to {@code other}; a positive value if this is
 *         greater than {@code other}.
 * @exception ClassCastException if {@code other} is not a byte buffer.
 * @since Android 1.0
 */
public int compareTo(ByteBuffer otherBuffer) {
    int compareRemaining = (remaining() < otherBuffer.remaining()) ? remaining() : otherBuffer.remaining();
    int thisPos = position;
    int otherPos = otherBuffer.position;
    byte thisByte, otherByte;
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

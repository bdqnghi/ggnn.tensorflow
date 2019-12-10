/**
 * Compare the remaining longs of this buffer to another long buffer's remaining longs.
 *
 * @param otherBuffer another long buffer.
 * @return a negative value if this is less than {@code otherBuffer}; 0 if this equals to {@code otherBuffer}; a positive value
 *         if this is greater than {@code otherBuffer}
 * @exception ClassCastException if {@code otherBuffer} is not a long buffer.
 * @since Android 1.0
 */
public int compareTo(LongBuffer otherBuffer) {
    int compareRemaining = (remaining() < otherBuffer.remaining()) ? remaining() : otherBuffer.remaining();
    int thisPos = position;
    int otherPos = otherBuffer.position;
    // BEGIN android-changed
    long thisLong, otherLong;
    while (compareRemaining > 0) {
        thisLong = get(thisPos);
        otherLong = otherBuffer.get(otherPos);
        if (thisLong != otherLong) {
            return thisLong < otherLong ? -1 : 1;
        }
        thisPos++;
        otherPos++;
        compareRemaining--;
    }
    // END android-changed
    return remaining() - otherBuffer.remaining();
}

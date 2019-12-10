/**
 * Compares the remaining ints of this buffer to another int buffer's remaining ints.
 *
 * @param otherBuffer another int buffer.
 * @return a negative value if this is less than {@code other}; 0 if this equals to {@code other}; a positive value if this is
 *         greater than {@code other}.
 * @exception ClassCastException if {@code other} is not an int buffer.
 * @since Android 1.0
 */
public int compareTo(IntBuffer otherBuffer) {
    int compareRemaining = (remaining() < otherBuffer.remaining()) ? remaining() : otherBuffer.remaining();
    int thisPos = position;
    int otherPos = otherBuffer.position;
    // BEGIN android-changed
    int thisInt, otherInt;
    while (compareRemaining > 0) {
        thisInt = get(thisPos);
        otherInt = otherBuffer.get(otherPos);
        if (thisInt != otherInt) {
            return thisInt < otherInt ? -1 : 1;
        }
        thisPos++;
        otherPos++;
        compareRemaining--;
    }
    // END android-changed
    return remaining() - otherBuffer.remaining();
}

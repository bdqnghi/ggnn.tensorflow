/**
 * Compare the remaining doubles of this buffer to another double buffer's remaining doubles.
 *
 * @param otherBuffer another double buffer.
 * @return a negative value if this is less than {@code other}; 0 if this equals to {@code other}; a positive value if this is
 *         greater than {@code other}.
 * @exception ClassCastException if {@code other} is not a double buffer.
 * @since Android 1.0
 */
public int compareTo(DoubleBuffer otherBuffer) {
    int compareRemaining = (remaining() < otherBuffer.remaining()) ? remaining() : otherBuffer.remaining();
    int thisPos = position;
    int otherPos = otherBuffer.position;
    // BEGIN android-changed
    double thisDouble, otherDouble;
    while (compareRemaining > 0) {
        thisDouble = get(thisPos);
        otherDouble = otherBuffer.get(otherPos);
        // checks for double and NaN inequality
        if ((thisDouble != otherDouble) && ((thisDouble == thisDouble) || (otherDouble == otherDouble))) {
            return thisDouble < otherDouble ? -1 : 1;
        }
        thisPos++;
        otherPos++;
        compareRemaining--;
    }
    // END android-changed
    return remaining() - otherBuffer.remaining();
}

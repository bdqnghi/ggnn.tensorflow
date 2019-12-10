/**
 * Compare the remaining floats of this buffer to another float buffer's remaining floats.
 *
 * @param otherBuffer another float buffer.
 * @return a negative value if this is less than {@code otherBuffer}; 0 if this equals to {@code otherBuffer}; a positive value
 *         if this is greater than {@code otherBuffer}.
 * @exception ClassCastException if {@code otherBuffer} is not a float buffer.
 * @since Android 1.0
 */
public int compareTo(FloatBuffer otherBuffer) {
    int compareRemaining = (remaining() < otherBuffer.remaining()) ? remaining() : otherBuffer.remaining();
    int thisPos = position;
    int otherPos = otherBuffer.position;
    // BEGIN android-changed
    float thisFloat, otherFloat;
    while (compareRemaining > 0) {
        thisFloat = get(thisPos);
        otherFloat = otherBuffer.get(otherPos);
        // checks for float and NaN inequality
        if ((thisFloat != otherFloat) && ((thisFloat == thisFloat) || (otherFloat == otherFloat))) {
            return thisFloat < otherFloat ? -1 : 1;
        }
        thisPos++;
        otherPos++;
        compareRemaining--;
    }
    // END android-changed
    return remaining() - otherBuffer.remaining();
}

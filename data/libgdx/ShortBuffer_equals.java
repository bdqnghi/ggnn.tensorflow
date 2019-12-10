/**
 * Checks whether this short buffer is equal to another object.
 * <p>
 * If {@code other} is not a short buffer then {@code false} is returned. Two short buffers are equal if and only if their
 * remaining shorts are exactly the same. Position, limit, capacity and mark are not considered.
 * </p>
 *
 * @param other the object to compare with this short buffer.
 * @return {@code true} if this short buffer is equal to {@code other}, {@code false} otherwise.
 * @since Android 1.0
 */
public boolean equals(Object other) {
    if (!(other instanceof ShortBuffer)) {
        return false;
    }
    ShortBuffer otherBuffer = (ShortBuffer) other;
    if (remaining() != otherBuffer.remaining()) {
        return false;
    }
    int myPosition = position;
    int otherPosition = otherBuffer.position;
    boolean equalSoFar = true;
    while (equalSoFar && (myPosition < limit)) {
        equalSoFar = get(myPosition++) == otherBuffer.get(otherPosition++);
    }
    return equalSoFar;
}

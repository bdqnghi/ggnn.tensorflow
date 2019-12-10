/**
 * Checks whether this float buffer is equal to another object.
 * <p>
 * If {@code other} is not a float buffer then {@code false} is returned. Two float buffers are equal if and only if their
 * remaining floats are exactly the same. Position, limit, capacity and mark are not considered.
 * </p>
 *
 * @param other the object to compare with this float buffer.
 * @return {@code true} if this float buffer is equal to {@code other}, {@code false} otherwise.
 * @since Android 1.0
 */
public boolean equals(Object other) {
    if (!(other instanceof FloatBuffer)) {
        return false;
    }
    FloatBuffer otherBuffer = (FloatBuffer) other;
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

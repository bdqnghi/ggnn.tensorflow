/**
 * Checks whether this int buffer is equal to another object.
 * <p>
 * If {@code other} is not a int buffer then {@code false} is returned. Two int buffers are equal if and only if their remaining
 * ints are exactly the same. Position, limit, capacity and mark are not considered.
 * </p>
 *
 * @param other the object to compare with this int buffer.
 * @return {@code true} if this int buffer is equal to {@code other}, {@code false} otherwise.
 * @since Android 1.0
 */
public boolean equals(Object other) {
    if (!(other instanceof IntBuffer)) {
        return false;
    }
    IntBuffer otherBuffer = (IntBuffer) other;
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

/**
 * Checks whether this byte buffer is equal to another object.
 * <p>
 * If {@code other} is not a byte buffer then {@code false} is returned. Two byte buffers are equal if and only if their
 * remaining bytes are exactly the same. Position, limit, capacity and mark are not considered.
 * </p>
 *
 * @param other the object to compare with this byte buffer.
 * @return {@code true} if this byte buffer is equal to {@code other}, {@code false} otherwise.
 * @since Android 1.0
 */
public boolean equals(Object other) {
    if (!(other instanceof ByteBuffer)) {
        return false;
    }
    ByteBuffer otherBuffer = (ByteBuffer) other;
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

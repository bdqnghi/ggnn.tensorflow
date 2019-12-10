public final String toString() {
    return String.copyValueOf(backingArray, offset + position, remaining());
}

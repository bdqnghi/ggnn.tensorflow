public final CharBuffer get(char[] dest, int off, int len) {
    int length = dest.length;
    if ((off < 0) || (len < 0) || (long) off + (long) len > length) {
        throw new IndexOutOfBoundsException();
    }
    if (len > remaining()) {
        throw new BufferUnderflowException();
    }
    int newPosition = position + len;
    sequence.toString().getChars(position, newPosition, dest, off);
    position = newPosition;
    return this;
}

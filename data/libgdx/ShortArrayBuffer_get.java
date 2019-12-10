public final ShortBuffer get(short[] dest, int off, int len) {
    int length = dest.length;
    if (off < 0 || len < 0 || (long) off + (long) len > length) {
        throw new IndexOutOfBoundsException();
    }
    if (len > remaining()) {
        throw new BufferUnderflowException();
    }
    System.arraycopy(backingArray, offset + position, dest, off, len);
    position += len;
    return this;
}

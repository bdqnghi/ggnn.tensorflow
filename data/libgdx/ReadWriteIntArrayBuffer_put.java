public IntBuffer put(int[] src, int off, int len) {
    int length = src.length;
    if (off < 0 || len < 0 || (long) off + (long) len > length) {
        throw new IndexOutOfBoundsException();
    }
    if (len > remaining()) {
        throw new BufferOverflowException();
    }
    System.arraycopy(src, off, backingArray, offset + position, len);
    position += len;
    return this;
}

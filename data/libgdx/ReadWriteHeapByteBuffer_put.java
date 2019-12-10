/*
	 * Override ByteBuffer.put(byte[], int, int) to improve performance.
	 * 
	 * (non-Javadoc)
	 * 
	 * @see java.nio.ByteBuffer#put(byte[], int, int)
	 */
public ByteBuffer put(byte[] src, int off, int len) {
    if (off < 0 || len < 0 || (long) off + (long) len > src.length) {
        throw new IndexOutOfBoundsException();
    }
    if (len > remaining()) {
        throw new BufferOverflowException();
    }
    if (isReadOnly()) {
        throw new ReadOnlyBufferException();
    }
    System.arraycopy(src, off, backingArray, offset + position, len);
    position += len;
    return this;
}

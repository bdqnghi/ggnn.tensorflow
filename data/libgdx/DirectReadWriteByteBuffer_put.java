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
    for (int i = 0; i < len; i++) {
        byteArray.set(i + position, src[off + i]);
    }
    position += len;
    return this;
}

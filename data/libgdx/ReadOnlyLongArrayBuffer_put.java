public final LongBuffer put(long[] src, int off, int len) {
    throw new ReadOnlyBufferException();
}

public final ShortBuffer put(short[] src, int off, int len) {
    throw new ReadOnlyBufferException();
}

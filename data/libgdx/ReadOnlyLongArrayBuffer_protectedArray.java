protected long[] protectedArray() {
    throw new ReadOnlyBufferException();
}

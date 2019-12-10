public CharBuffer put(String src, int start, int end) {
    if ((start < 0) || (end < 0) || (long) start + (long) end > src.length()) {
        throw new IndexOutOfBoundsException();
    }
    throw new ReadOnlyBufferException();
}

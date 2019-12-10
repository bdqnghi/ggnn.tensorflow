public final CharSequence subSequence(int start, int end) {
    if (start < 0 || end < start || end > remaining()) {
        throw new IndexOutOfBoundsException();
    }
    CharBuffer result = duplicate();
    result.limit(position + end);
    result.position(position + start);
    return result;
}

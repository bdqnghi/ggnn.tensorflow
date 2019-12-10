public CharSequence subSequence(int start, int end) {
    if (end < start || start < 0 || end > remaining()) {
        throw new IndexOutOfBoundsException();
    }
    CharSequenceAdapter result = copy(this);
    result.position = position + start;
    result.limit = position + end;
    return result;
}

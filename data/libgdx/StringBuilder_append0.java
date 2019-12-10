final void append0(CharSequence s, int start, int end) {
    if (s == null) {
        s = "null";
    }
    if (start < 0 || end < 0 || start > end || end > s.length()) {
        throw new IndexOutOfBoundsException();
    }
    append0(s.subSequence(start, end).toString());
}

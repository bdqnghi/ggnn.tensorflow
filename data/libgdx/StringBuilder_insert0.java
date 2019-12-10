final void insert0(int index, CharSequence s, int start, int end) {
    if (s == null) {
        s = "null";
    }
    if (index < 0 || index > length || start < 0 || end < 0 || start > end || end > s.length()) {
        throw new IndexOutOfBoundsException();
    }
    insert0(index, s.subSequence(start, end).toString());
}

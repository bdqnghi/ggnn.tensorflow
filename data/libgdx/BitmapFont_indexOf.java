static int indexOf(CharSequence text, char ch, int start) {
    final int n = text.length();
    for (; start < n; start++) if (text.charAt(start) == ch)
        return start;
    return n;
}

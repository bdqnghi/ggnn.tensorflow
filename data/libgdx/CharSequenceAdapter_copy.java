static CharSequenceAdapter copy(CharSequenceAdapter other) {
    CharSequenceAdapter buf = new CharSequenceAdapter(other.sequence);
    buf.limit = other.limit;
    buf.position = other.position;
    buf.mark = other.mark;
    return buf;
}

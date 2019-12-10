static ReadOnlyCharArrayBuffer copy(CharArrayBuffer other, int markOfOther) {
    ReadOnlyCharArrayBuffer buf = new ReadOnlyCharArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

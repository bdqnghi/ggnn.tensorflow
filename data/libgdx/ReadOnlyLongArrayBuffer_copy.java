static ReadOnlyLongArrayBuffer copy(LongArrayBuffer other, int markOfOther) {
    ReadOnlyLongArrayBuffer buf = new ReadOnlyLongArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

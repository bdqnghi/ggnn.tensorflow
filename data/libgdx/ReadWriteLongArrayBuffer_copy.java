static ReadWriteLongArrayBuffer copy(LongArrayBuffer other, int markOfOther) {
    ReadWriteLongArrayBuffer buf = new ReadWriteLongArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

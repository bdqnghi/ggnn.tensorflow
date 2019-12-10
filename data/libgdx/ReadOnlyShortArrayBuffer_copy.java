static ReadOnlyShortArrayBuffer copy(ShortArrayBuffer other, int markOfOther) {
    ReadOnlyShortArrayBuffer buf = new ReadOnlyShortArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

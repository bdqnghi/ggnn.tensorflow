static ReadOnlyIntArrayBuffer copy(IntArrayBuffer other, int markOfOther) {
    ReadOnlyIntArrayBuffer buf = new ReadOnlyIntArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

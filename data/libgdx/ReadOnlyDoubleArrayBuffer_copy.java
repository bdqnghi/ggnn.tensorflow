static ReadOnlyDoubleArrayBuffer copy(DoubleArrayBuffer other, int markOfOther) {
    ReadOnlyDoubleArrayBuffer buf = new ReadOnlyDoubleArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

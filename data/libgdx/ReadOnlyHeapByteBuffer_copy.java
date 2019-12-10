static ReadOnlyHeapByteBuffer copy(HeapByteBuffer other, int markOfOther) {
    ReadOnlyHeapByteBuffer buf = new ReadOnlyHeapByteBuffer(other.backingArray, other.capacity(), other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    buf.order(other.order());
    return buf;
}

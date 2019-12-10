static ReadWriteHeapByteBuffer copy(HeapByteBuffer other, int markOfOther) {
    ReadWriteHeapByteBuffer buf = new ReadWriteHeapByteBuffer(other.backingArray, other.capacity(), other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    buf.order(other.order());
    return buf;
}

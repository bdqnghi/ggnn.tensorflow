static ReadWriteIntArrayBuffer copy(IntArrayBuffer other, int markOfOther) {
    ReadWriteIntArrayBuffer buf = new ReadWriteIntArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

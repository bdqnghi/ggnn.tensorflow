static ReadWriteShortArrayBuffer copy(ShortArrayBuffer other, int markOfOther) {
    ReadWriteShortArrayBuffer buf = new ReadWriteShortArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

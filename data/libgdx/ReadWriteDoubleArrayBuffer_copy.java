static ReadWriteDoubleArrayBuffer copy(DoubleArrayBuffer other, int markOfOther) {
    ReadWriteDoubleArrayBuffer buf = new ReadWriteDoubleArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

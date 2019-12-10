static ReadWriteCharArrayBuffer copy(CharArrayBuffer other, int markOfOther) {
    ReadWriteCharArrayBuffer buf = new ReadWriteCharArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

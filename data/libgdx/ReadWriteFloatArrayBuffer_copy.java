static ReadWriteFloatArrayBuffer copy(FloatArrayBuffer other, int markOfOther) {
    ReadWriteFloatArrayBuffer buf = new ReadWriteFloatArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

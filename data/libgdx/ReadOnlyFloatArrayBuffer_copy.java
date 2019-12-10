static ReadOnlyFloatArrayBuffer copy(FloatArrayBuffer other, int markOfOther) {
    ReadOnlyFloatArrayBuffer buf = new ReadOnlyFloatArrayBuffer(other.capacity(), other.backingArray, other.offset);
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    return buf;
}

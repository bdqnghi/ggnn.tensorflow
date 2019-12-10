static DirectReadWriteByteBuffer copy(DirectByteBuffer other, int markOfOther) {
    DirectReadWriteByteBuffer buf = new DirectReadWriteByteBuffer(other.byteArray.buffer(), other.capacity(), other.byteArray.byteOffset());
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    buf.order(other.order());
    return buf;
}

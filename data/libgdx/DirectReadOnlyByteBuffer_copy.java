static DirectReadOnlyByteBuffer copy(DirectByteBuffer other, int markOfOther) {
    DirectReadOnlyByteBuffer buf = new DirectReadOnlyByteBuffer(other.byteArray.buffer(), other.capacity(), other.byteArray.byteOffset());
    buf.limit = other.limit();
    buf.position = other.position();
    buf.mark = markOfOther;
    buf.order(other.order());
    return buf;
}

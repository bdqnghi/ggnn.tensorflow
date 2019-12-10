public ByteBuffer asReadOnlyBuffer() {
    return ReadOnlyHeapByteBuffer.copy(this, mark);
}

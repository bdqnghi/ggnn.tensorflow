public ByteBuffer asReadOnlyBuffer() {
    return DirectReadOnlyByteBuffer.copy(this, mark);
}

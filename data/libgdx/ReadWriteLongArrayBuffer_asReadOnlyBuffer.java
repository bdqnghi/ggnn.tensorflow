public LongBuffer asReadOnlyBuffer() {
    return ReadOnlyLongArrayBuffer.copy(this, mark);
}

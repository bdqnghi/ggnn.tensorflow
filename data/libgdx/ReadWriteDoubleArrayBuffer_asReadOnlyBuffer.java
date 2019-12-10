public DoubleBuffer asReadOnlyBuffer() {
    return ReadOnlyDoubleArrayBuffer.copy(this, mark);
}

public ShortBuffer asReadOnlyBuffer() {
    return ReadOnlyShortArrayBuffer.copy(this, mark);
}

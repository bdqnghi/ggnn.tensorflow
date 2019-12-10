public IntBuffer asReadOnlyBuffer() {
    return ReadOnlyIntArrayBuffer.copy(this, mark);
}

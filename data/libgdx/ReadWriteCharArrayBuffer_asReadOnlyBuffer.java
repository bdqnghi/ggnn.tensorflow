public CharBuffer asReadOnlyBuffer() {
    return ReadOnlyCharArrayBuffer.copy(this, mark);
}

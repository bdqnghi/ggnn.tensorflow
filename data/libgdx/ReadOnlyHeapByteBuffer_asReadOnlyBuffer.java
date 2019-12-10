public ByteBuffer asReadOnlyBuffer() {
    return copy(this, mark);
}

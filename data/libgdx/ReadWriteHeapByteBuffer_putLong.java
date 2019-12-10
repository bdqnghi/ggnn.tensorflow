public ByteBuffer putLong(long value) {
    int newPosition = position + 8;
    if (newPosition > limit) {
        throw new BufferOverflowException();
    }
    store(position, value);
    position = newPosition;
    return this;
}

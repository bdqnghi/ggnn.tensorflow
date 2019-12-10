public ByteBuffer putShort(short value) {
    int newPosition = position + 2;
    if (newPosition > limit) {
        throw new BufferOverflowException();
    }
    store(position, value);
    position = newPosition;
    return this;
}

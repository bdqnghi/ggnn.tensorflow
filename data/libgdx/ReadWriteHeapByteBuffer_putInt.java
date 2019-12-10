public ByteBuffer putInt(int index, int value) {
    if (index < 0 || (long) index + 4 > limit) {
        throw new IndexOutOfBoundsException();
    }
    store(index, value);
    return this;
}

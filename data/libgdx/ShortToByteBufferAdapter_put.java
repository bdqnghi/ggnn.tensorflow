@Override
public ShortBuffer put(int index, short c) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    byteBuffer.putShort(index << 1, c);
    return this;
}

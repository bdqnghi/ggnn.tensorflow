@Override
public LongBuffer put(int index, long c) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    byteBuffer.putLong(index << 3, c);
    return this;
}

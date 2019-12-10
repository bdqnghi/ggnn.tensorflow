@Override
public DoubleBuffer put(int index, double c) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    byteBuffer.putDouble(index << 3, c);
    return this;
}

@Override
public double get(int index) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    return byteBuffer.getDouble(index << 3);
}

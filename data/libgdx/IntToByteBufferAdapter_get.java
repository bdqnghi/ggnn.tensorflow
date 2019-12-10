@Override
public int get(int index) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    return byteBuffer.getInt(index << 2);
}

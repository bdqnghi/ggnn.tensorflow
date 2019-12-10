@Override
public short get(int index) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    return byteBuffer.getShort(index << 1);
}

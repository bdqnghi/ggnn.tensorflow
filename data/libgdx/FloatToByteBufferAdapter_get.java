@Override
public float get(int index) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    return byteBuffer.getFloat(index << 2);
}

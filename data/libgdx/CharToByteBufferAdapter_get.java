@Override
public char get(int index) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    return byteBuffer.getChar(index << 1);
}

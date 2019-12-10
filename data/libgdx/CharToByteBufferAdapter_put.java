@Override
public CharBuffer put(int index, char c) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    byteBuffer.putChar(index << 1, c);
    return this;
}

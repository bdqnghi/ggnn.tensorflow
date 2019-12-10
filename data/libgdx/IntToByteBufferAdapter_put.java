@Override
public IntBuffer put(int index, int c) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    byteBuffer.putInt(index << 2, c);
    return this;
}

@Override
public FloatBuffer put(int index, float c) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    byteBuffer.putFloat(index << 2, c);
    return this;
}

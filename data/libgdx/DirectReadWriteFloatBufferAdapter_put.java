@Override
public FloatBuffer put(int index, float c) {
    // if (index < 0 || index >= limit) {
    // throw new IndexOutOfBoundsException();
    // }
    floatArray.set(index, c);
    return this;
}

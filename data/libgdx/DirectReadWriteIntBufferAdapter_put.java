@Override
public IntBuffer put(int index, int c) {
    // if (index < 0 || index >= limit) {
    // throw new IndexOutOfBoundsException();
    // }
    intArray.set(index, c);
    return this;
}

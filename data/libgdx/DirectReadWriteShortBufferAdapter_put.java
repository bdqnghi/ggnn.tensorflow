@Override
public ShortBuffer put(int index, short c) {
    // if (index < 0 || index >= limit) {
    // throw new IndexOutOfBoundsException();
    // }
    shortArray.set(index, c);
    return this;
}

public final short getShort(int index) {
    if (index < 0 || index + 2 > limit) {
        throw new IndexOutOfBoundsException();
    }
    return loadShort(index);
}

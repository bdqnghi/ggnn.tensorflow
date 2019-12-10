public final int getInt(int index) {
    if (index < 0 || index + 4 > limit) {
        throw new IndexOutOfBoundsException();
    }
    return loadInt(index);
}

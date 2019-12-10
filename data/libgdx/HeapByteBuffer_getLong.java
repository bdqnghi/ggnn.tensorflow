public final long getLong(int index) {
    if (index < 0 || index + 8 > limit) {
        throw new IndexOutOfBoundsException();
    }
    return loadLong(index);
}

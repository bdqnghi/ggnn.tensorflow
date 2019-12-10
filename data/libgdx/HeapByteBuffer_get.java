public final byte get(int index) {
    if (index < 0 || index >= limit) {
        throw new IndexOutOfBoundsException();
    }
    return backingArray[offset + index];
}

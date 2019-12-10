public void addAll(boolean[] array, int offset, int length) {
    boolean[] items = this.items;
    int sizeNeeded = size + length;
    if (sizeNeeded > items.length)
        items = resize(Math.max(8, (int) (sizeNeeded * 1.75f)));
    System.arraycopy(array, offset, items, size, length);
    size += length;
}

public void addAll(T[] array, int start, int count) {
    T[] items = this.items;
    int sizeNeeded = size + count;
    if (sizeNeeded > items.length)
        items = resize(Math.max(8, (int) (sizeNeeded * 1.75f)));
    System.arraycopy(array, start, items, size, count);
    size += count;
}

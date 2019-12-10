protected long[] resize(int newSize) {
    long[] newItems = new long[newSize];
    long[] items = this.items;
    System.arraycopy(items, 0, newItems, 0, Math.min(size, newItems.length));
    this.items = newItems;
    return newItems;
}

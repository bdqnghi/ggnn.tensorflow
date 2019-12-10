protected short[] resize(int newSize) {
    short[] newItems = new short[newSize];
    short[] items = this.items;
    System.arraycopy(items, 0, newItems, 0, Math.min(size, newItems.length));
    this.items = newItems;
    return newItems;
}

protected boolean[] resize(int newSize) {
    boolean[] newItems = new boolean[newSize];
    boolean[] items = this.items;
    System.arraycopy(items, 0, newItems, 0, Math.min(size, newItems.length));
    this.items = newItems;
    return newItems;
}

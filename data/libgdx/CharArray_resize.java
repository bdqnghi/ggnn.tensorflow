protected char[] resize(int newSize) {
    char[] newItems = new char[newSize];
    char[] items = this.items;
    System.arraycopy(items, 0, newItems, 0, Math.min(size, newItems.length));
    this.items = newItems;
    return newItems;
}

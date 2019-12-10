protected byte[] resize(int newSize) {
    byte[] newItems = new byte[newSize];
    byte[] items = this.items;
    System.arraycopy(items, 0, newItems, 0, Math.min(size, newItems.length));
    this.items = newItems;
    return newItems;
}

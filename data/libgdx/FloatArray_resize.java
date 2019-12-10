protected float[] resize(int newSize) {
    float[] newItems = new float[newSize];
    float[] items = this.items;
    System.arraycopy(items, 0, newItems, 0, Math.min(size, newItems.length));
    this.items = newItems;
    return newItems;
}

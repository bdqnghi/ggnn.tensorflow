/**
 * Creates a new backing array with the specified size containing the current items.
 */
protected T[] resize(int newSize) {
    T[] items = this.items;
    T[] newItems = (T[]) ArrayReflection.newInstance(items.getClass().getComponentType(), newSize);
    System.arraycopy(items, 0, newItems, 0, Math.min(size, newItems.length));
    this.items = newItems;
    return newItems;
}

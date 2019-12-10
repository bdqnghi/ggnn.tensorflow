/**
 * Removes and returns the item at the specified index.
 */
public long removeIndex(int index) {
    if (index >= size)
        throw new IndexOutOfBoundsException("index can't be >= size: " + index + " >= " + size);
    long[] items = this.items;
    long value = items[index];
    size--;
    if (ordered)
        System.arraycopy(items, index + 1, items, index, size - index);
    else
        items[index] = items[size];
    return value;
}

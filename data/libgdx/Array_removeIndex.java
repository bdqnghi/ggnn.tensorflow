/**
 * Removes and returns the item at the specified index.
 */
public T removeIndex(int index) {
    if (index >= size)
        throw new IndexOutOfBoundsException("index can't be >= size: " + index + " >= " + size);
    T[] items = this.items;
    T value = (T) items[index];
    size--;
    if (ordered)
        System.arraycopy(items, index + 1, items, index, size - index);
    else
        items[index] = items[size];
    items[size] = null;
    return value;
}

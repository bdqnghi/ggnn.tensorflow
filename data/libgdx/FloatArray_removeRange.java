/**
 * Removes the items between the specified indices, inclusive.
 */
public void removeRange(int start, int end) {
    if (end >= size)
        throw new IndexOutOfBoundsException("end can't be >= size: " + end + " >= " + size);
    if (start > end)
        throw new IndexOutOfBoundsException("start can't be > end: " + start + " > " + end);
    float[] items = this.items;
    int count = end - start + 1;
    if (ordered)
        System.arraycopy(items, start + count, items, start, size - (start + count));
    else {
        int lastIndex = this.size - 1;
        for (int i = 0; i < count; i++) items[start + i] = items[lastIndex - i];
    }
    size -= count;
}

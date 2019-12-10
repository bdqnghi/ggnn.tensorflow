/**
 * Retrieves the value in queue without removing it. Indexing is from the front to back, zero based. Therefore get(0) is the
 * same as {@link #first()}.
 * @throws IndexOutOfBoundsException when the index is negative or >= size
 */
public T get(int index) {
    if (index < 0)
        throw new IndexOutOfBoundsException("index can't be < 0: " + index);
    if (index >= size)
        throw new IndexOutOfBoundsException("index can't be >= size: " + index + " >= " + size);
    final T[] values = this.values;
    int i = head + index;
    if (i >= values.length) {
        i -= values.length;
    }
    return values[i];
}

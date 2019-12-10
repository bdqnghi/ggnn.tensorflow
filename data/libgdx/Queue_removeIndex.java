/**
 * Removes and returns the item at the specified index.
 */
public T removeIndex(int index) {
    if (index < 0)
        throw new IndexOutOfBoundsException("index can't be < 0: " + index);
    if (index >= size)
        throw new IndexOutOfBoundsException("index can't be >= size: " + index + " >= " + size);
    T[] values = this.values;
    int head = this.head, tail = this.tail;
    index += head;
    T value;
    if (head < tail) {
        // index is between head and tail.
        value = (T) values[index];
        System.arraycopy(values, index + 1, values, index, tail - index);
        values[tail] = null;
        this.tail--;
    } else if (index >= values.length) {
        // index is between 0 and tail.
        index -= values.length;
        value = (T) values[index];
        System.arraycopy(values, index + 1, values, index, tail - index);
        this.tail--;
    } else {
        // index is between head and values.length.
        value = (T) values[index];
        System.arraycopy(values, head, values, head + 1, index - head);
        values[head] = null;
        this.head++;
    }
    size--;
    return value;
}

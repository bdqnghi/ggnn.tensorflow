/**
 * Removes and returns the last item.
 */
public T pop() {
    if (size == 0)
        throw new IllegalStateException("Array is empty.");
    --size;
    T item = items[size];
    items[size] = null;
    return item;
}

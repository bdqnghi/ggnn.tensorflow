/**
 * Returns the last item.
 */
public T peek() {
    if (size == 0)
        throw new IllegalStateException("Array is empty.");
    return items[size - 1];
}

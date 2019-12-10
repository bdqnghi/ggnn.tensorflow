/**
 * Returns the first item.
 */
public long first() {
    if (size == 0)
        throw new IllegalStateException("Array is empty.");
    return items[0];
}

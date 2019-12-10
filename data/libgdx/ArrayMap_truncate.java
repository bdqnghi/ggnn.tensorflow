/**
 * Reduces the size of the arrays to the specified size. If the arrays are already smaller than the specified size, no action
 * is taken.
 */
public void truncate(int newSize) {
    if (size <= newSize)
        return;
    for (int i = newSize; i < size; i++) {
        keys[i] = null;
        values[i] = null;
    }
    size = newSize;
}

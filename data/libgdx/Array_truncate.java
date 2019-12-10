/**
 * Reduces the size of the array to the specified size. If the array is already smaller than the specified size, no action is
 * taken.
 */
public void truncate(int newSize) {
    if (size <= newSize)
        return;
    for (int i = newSize; i < size; i++) items[i] = null;
    size = newSize;
}

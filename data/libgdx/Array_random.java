/**
 * Returns a random item from the array, or null if the array is empty.
 */
public T random() {
    if (size == 0)
        return null;
    return items[MathUtils.random(0, size - 1)];
}

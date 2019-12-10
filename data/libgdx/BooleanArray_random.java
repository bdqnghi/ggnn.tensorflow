/**
 * Returns a random item from the array, or false if the array is empty.
 */
public boolean random() {
    if (size == 0)
        return false;
    return items[MathUtils.random(0, size - 1)];
}

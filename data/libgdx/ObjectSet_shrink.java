/**
 * Reduces the size of the backing arrays to be the specified capacity or less. If the capacity is already less, nothing is
 * done. If the set contains more items than the specified capacity, the next highest power of two capacity is used instead.
 */
public void shrink(int maximumCapacity) {
    if (maximumCapacity < 0)
        throw new IllegalArgumentException("maximumCapacity must be >= 0: " + maximumCapacity);
    if (size > maximumCapacity)
        maximumCapacity = size;
    if (capacity <= maximumCapacity)
        return;
    maximumCapacity = MathUtils.nextPowerOfTwo(maximumCapacity);
    resize(maximumCapacity);
}

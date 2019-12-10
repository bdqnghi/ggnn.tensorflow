/**
 * Increases the size of the backing arrays to accommodate the specified number of additional entries. Useful before adding
 * many entries to avoid multiple backing array resizes.
 */
public void ensureCapacity(int additionalCapacity) {
    int sizeNeeded = size + additionalCapacity;
    if (sizeNeeded >= keys.length)
        resize(Math.max(8, sizeNeeded));
}

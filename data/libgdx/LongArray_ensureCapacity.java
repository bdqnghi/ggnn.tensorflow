/**
 * Increases the size of the backing array to accommodate the specified number of additional items. Useful before adding many
 * items to avoid multiple backing array resizes.
 * @return {@link #items}
 */
public long[] ensureCapacity(int additionalCapacity) {
    int sizeNeeded = size + additionalCapacity;
    if (sizeNeeded > items.length)
        resize(Math.max(8, sizeNeeded));
    return items;
}

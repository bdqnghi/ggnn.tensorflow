/**
 * Increases the size of the backing array to accommodate the specified number of additional items. Useful before adding many
 * items to avoid multiple backing array resizes.
 */
public void ensureCapacity(int additionalCapacity) {
    int sizeNeeded = size + additionalCapacity;
    if (sizeNeeded >= threshold)
        resize(MathUtils.nextPowerOfTwo((int) Math.ceil(sizeNeeded / loadFactor)));
}

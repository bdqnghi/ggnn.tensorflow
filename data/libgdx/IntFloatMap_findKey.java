/**
 * Returns the key for the specified value, or null if it is not in the map. Note this traverses the entire map and compares
 * every value, which may be an expensive operation.
 */
public int findKey(float value, int notFound) {
    if (hasZeroValue && zeroValue == value)
        return 0;
    int[] keyTable = this.keyTable;
    float[] valueTable = this.valueTable;
    for (int i = capacity + stashSize; i-- > 0; ) if (keyTable[i] != 0 && valueTable[i] == value)
        return keyTable[i];
    return notFound;
}

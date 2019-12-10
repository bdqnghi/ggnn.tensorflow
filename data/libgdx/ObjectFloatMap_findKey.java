/**
 * Returns the key for the specified value, or null if it is not in the map. Note this traverses the entire map and compares
 * every value, which may be an expensive operation.
 */
public K findKey(float value) {
    K[] keyTable = this.keyTable;
    float[] valueTable = this.valueTable;
    for (int i = capacity + stashSize; i-- > 0; ) if (keyTable[i] != null && valueTable[i] == value)
        return keyTable[i];
    return null;
}

/**
 * Returns the key for the specified value, or null if it is not in the map. Note this traverses the entire map and compares
 * every value, which may be an expensive operation.
 * @param identity If true, uses == to compare the specified value with values in the map. If false, uses
 *           {@link #equals(Object)}.
 */
public K findKey(Object value, boolean identity) {
    V[] valueTable = this.valueTable;
    if (value == null) {
        K[] keyTable = this.keyTable;
        for (int i = capacity + stashSize; i-- > 0; ) if (keyTable[i] != null && valueTable[i] == null)
            return keyTable[i];
    } else if (identity) {
        for (int i = capacity + stashSize; i-- > 0; ) if (valueTable[i] == value)
            return keyTable[i];
    } else {
        for (int i = capacity + stashSize; i-- > 0; ) if (value.equals(valueTable[i]))
            return keyTable[i];
    }
    return null;
}

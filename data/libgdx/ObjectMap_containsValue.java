/**
 * Returns true if the specified value is in the map. Note this traverses the entire map and compares every value, which may
 * be an expensive operation.
 * @param identity If true, uses == to compare the specified value with values in the map. If false, uses
 *           {@link #equals(Object)}.
 */
public boolean containsValue(Object value, boolean identity) {
    V[] valueTable = this.valueTable;
    if (value == null) {
        K[] keyTable = this.keyTable;
        for (int i = capacity + stashSize; i-- > 0; ) if (keyTable[i] != null && valueTable[i] == null)
            return true;
    } else if (identity) {
        for (int i = capacity + stashSize; i-- > 0; ) if (valueTable[i] == value)
            return true;
    } else {
        for (int i = capacity + stashSize; i-- > 0; ) if (value.equals(valueTable[i]))
            return true;
    }
    return false;
}

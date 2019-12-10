/**
 * Returns true if the specified value is in the map. Note this traverses the entire map and compares every value, which may be
 * an expensive operation.
 */
public boolean containsValue(Object value, boolean identity) {
    V[] valueTable = this.valueTable;
    if (value == null) {
        if (hasZeroValue && zeroValue == null)
            return true;
        long[] keyTable = this.keyTable;
        for (int i = capacity + stashSize; i-- > 0; ) if (keyTable[i] != EMPTY && valueTable[i] == null)
            return true;
    } else if (identity) {
        if (value == zeroValue)
            return true;
        for (int i = capacity + stashSize; i-- > 0; ) if (valueTable[i] == value)
            return true;
    } else {
        if (hasZeroValue && value.equals(zeroValue))
            return true;
        for (int i = capacity + stashSize; i-- > 0; ) if (value.equals(valueTable[i]))
            return true;
    }
    return false;
}

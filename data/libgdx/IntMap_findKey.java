/**
 * Returns the key for the specified value, or <tt>notFound</tt> if it is not in the map. Note this traverses the entire map
 * and compares every value, which may be an expensive operation.
 * @param identity If true, uses == to compare the specified value with values in the map. If false, uses
 *           {@link #equals(Object)}.
 */
public int findKey(Object value, boolean identity, int notFound) {
    V[] valueTable = this.valueTable;
    if (value == null) {
        if (hasZeroValue && zeroValue == null)
            return 0;
        int[] keyTable = this.keyTable;
        for (int i = capacity + stashSize; i-- > 0; ) if (keyTable[i] != EMPTY && valueTable[i] == null)
            return keyTable[i];
    } else if (identity) {
        if (value == zeroValue)
            return 0;
        for (int i = capacity + stashSize; i-- > 0; ) if (valueTable[i] == value)
            return keyTable[i];
    } else {
        if (hasZeroValue && value.equals(zeroValue))
            return 0;
        for (int i = capacity + stashSize; i-- > 0; ) if (value.equals(valueTable[i]))
            return keyTable[i];
    }
    return notFound;
}

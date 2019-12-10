/**
 * Returns true if the specified value is in the map. Note this traverses the entire map and compares every value, which may be
 * an expensive operation.
 */
public boolean containsValue(int value) {
    if (hasZeroValue && zeroValue == value)
        return true;
    int[] keyTable = this.keyTable, valueTable = this.valueTable;
    for (int i = capacity + stashSize; i-- > 0; ) if (keyTable[i] != 0 && valueTable[i] == value)
        return true;
    return false;
}

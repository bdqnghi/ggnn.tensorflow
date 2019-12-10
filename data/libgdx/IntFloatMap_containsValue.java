/**
 * Returns true if the specified value is in the map. Note this traverses the entire map and compares every value, which may be
 * an expensive operation.
 */
public boolean containsValue(float value, float epsilon) {
    if (hasZeroValue && Math.abs(zeroValue - value) <= epsilon)
        return true;
    float[] valueTable = this.valueTable;
    for (int i = capacity + stashSize; i-- > 0; ) if (Math.abs(valueTable[i] - value) <= epsilon)
        return true;
    return false;
}

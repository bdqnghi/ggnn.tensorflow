public int hashCode() {
    int h = 0;
    if (hasZeroValue && zeroValue != null) {
        h += zeroValue.hashCode();
    }
    long[] keyTable = this.keyTable;
    V[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        long key = keyTable[i];
        if (key != EMPTY) {
            h += (int) (key ^ (key >>> 32)) * 31;
            V value = valueTable[i];
            if (value != null) {
                h += value.hashCode();
            }
        }
    }
    return h;
}

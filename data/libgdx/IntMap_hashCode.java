public int hashCode() {
    int h = 0;
    if (hasZeroValue && zeroValue != null) {
        h += zeroValue.hashCode();
    }
    int[] keyTable = this.keyTable;
    V[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        int key = keyTable[i];
        if (key != EMPTY) {
            h += key * 31;
            V value = valueTable[i];
            if (value != null) {
                h += value.hashCode();
            }
        }
    }
    return h;
}

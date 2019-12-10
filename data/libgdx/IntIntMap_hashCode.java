public int hashCode() {
    int h = 0;
    if (hasZeroValue) {
        h += Float.floatToIntBits(zeroValue);
    }
    int[] keyTable = this.keyTable;
    int[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        int key = keyTable[i];
        if (key != EMPTY) {
            h += key * 31;
            int value = valueTable[i];
            h += value;
        }
    }
    return h;
}

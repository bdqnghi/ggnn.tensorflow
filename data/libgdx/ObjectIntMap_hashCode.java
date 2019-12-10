public int hashCode() {
    int h = 0;
    K[] keyTable = this.keyTable;
    int[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        K key = keyTable[i];
        if (key != null) {
            h += key.hashCode() * 31;
            int value = valueTable[i];
            h += value;
        }
    }
    return h;
}

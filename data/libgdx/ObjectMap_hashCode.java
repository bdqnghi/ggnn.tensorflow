public int hashCode() {
    int h = 0;
    K[] keyTable = this.keyTable;
    V[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        K key = keyTable[i];
        if (key != null) {
            h += key.hashCode() * 31;
            V value = valueTable[i];
            if (value != null) {
                h += value.hashCode();
            }
        }
    }
    return h;
}

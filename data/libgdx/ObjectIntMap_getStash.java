private int getStash(K key, int defaultValue) {
    K[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (key.equals(keyTable[i]))
        return valueTable[i];
    return defaultValue;
}

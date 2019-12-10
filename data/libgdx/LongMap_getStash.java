private V getStash(long key, V defaultValue) {
    long[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (keyTable[i] == key)
        return valueTable[i];
    return defaultValue;
}

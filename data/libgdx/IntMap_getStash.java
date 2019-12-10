private V getStash(int key, V defaultValue) {
    int[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (keyTable[i] == key)
        return valueTable[i];
    return defaultValue;
}

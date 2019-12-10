private int getStash(int key, int defaultValue) {
    int[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (key == keyTable[i])
        return valueTable[i];
    return defaultValue;
}

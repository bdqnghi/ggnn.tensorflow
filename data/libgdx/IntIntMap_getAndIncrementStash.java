private int getAndIncrementStash(int key, int defaultValue, int increment) {
    int[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (key == keyTable[i]) {
        int value = valueTable[i];
        valueTable[i] = value + increment;
        return value;
    }
    put(key, defaultValue + increment);
    return defaultValue;
}

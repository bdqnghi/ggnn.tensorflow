private int getAndIncrementStash(K key, int defaultValue, int increment) {
    K[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (key.equals(keyTable[i])) {
        int value = valueTable[i];
        valueTable[i] = value + increment;
        return value;
    }
    put(key, defaultValue + increment);
    return defaultValue;
}

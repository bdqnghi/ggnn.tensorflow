private float getAndIncrementStash(K key, float defaultValue, float increment) {
    K[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (key.equals(keyTable[i])) {
        float value = valueTable[i];
        valueTable[i] = value + increment;
        return value;
    }
    put(key, defaultValue + increment);
    return defaultValue;
}

private float getAndIncrementStash(int key, float defaultValue, float increment) {
    int[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (key == keyTable[i]) {
        float value = valueTable[i];
        valueTable[i] = value + increment;
        return value;
    }
    put(key, defaultValue + increment);
    return defaultValue;
}

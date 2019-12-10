float removeStash(K key, float defaultValue) {
    K[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) {
        if (key.equals(keyTable[i])) {
            float oldValue = valueTable[i];
            removeStashIndex(i);
            size--;
            return oldValue;
        }
    }
    return defaultValue;
}

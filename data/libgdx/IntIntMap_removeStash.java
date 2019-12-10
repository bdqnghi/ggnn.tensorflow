int removeStash(int key, int defaultValue) {
    int[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) {
        if (key == keyTable[i]) {
            int oldValue = valueTable[i];
            removeStashIndex(i);
            size--;
            return oldValue;
        }
    }
    return defaultValue;
}

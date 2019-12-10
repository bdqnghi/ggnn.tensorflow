V removeStash(K key) {
    K[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) {
        if (keyTable[i] == key) {
            V oldValue = valueTable[i];
            removeStashIndex(i);
            size--;
            return oldValue;
        }
    }
    return null;
}

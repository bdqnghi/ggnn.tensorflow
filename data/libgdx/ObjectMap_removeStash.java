V removeStash(K key) {
    K[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) {
        if (key.equals(keyTable[i])) {
            V oldValue = valueTable[i];
            removeStashIndex(i);
            size--;
            return oldValue;
        }
    }
    return null;
}

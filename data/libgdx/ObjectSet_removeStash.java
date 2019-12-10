boolean removeStash(T key) {
    T[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) {
        if (key.equals(keyTable[i])) {
            removeStashIndex(i);
            size--;
            return true;
        }
    }
    return false;
}

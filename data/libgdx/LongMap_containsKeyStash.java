private boolean containsKeyStash(long key) {
    long[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (keyTable[i] == key)
        return true;
    return false;
}

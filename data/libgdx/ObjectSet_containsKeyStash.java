private boolean containsKeyStash(T key) {
    T[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (key.equals(keyTable[i]))
        return true;
    return false;
}

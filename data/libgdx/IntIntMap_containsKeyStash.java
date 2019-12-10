private boolean containsKeyStash(int key) {
    int[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) if (key == keyTable[i])
        return true;
    return false;
}

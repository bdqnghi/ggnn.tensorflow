public int first() {
    if (hasZeroValue)
        return 0;
    int[] keyTable = this.keyTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) if (keyTable[i] != EMPTY)
        return keyTable[i];
    throw new IllegalStateException("IntSet is empty.");
}

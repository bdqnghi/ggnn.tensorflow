public void clear() {
    if (size == 0)
        return;
    int[] keyTable = this.keyTable;
    for (int i = capacity + stashSize; i-- > 0; ) keyTable[i] = EMPTY;
    size = 0;
    stashSize = 0;
    hasZeroValue = false;
}

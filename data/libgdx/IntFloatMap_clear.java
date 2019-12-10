public void clear() {
    if (size == 0)
        return;
    int[] keyTable = this.keyTable;
    for (int i = capacity + stashSize; i-- > 0; ) keyTable[i] = EMPTY;
    hasZeroValue = false;
    size = 0;
    stashSize = 0;
}

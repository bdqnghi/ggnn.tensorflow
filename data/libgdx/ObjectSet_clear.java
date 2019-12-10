public void clear() {
    if (size == 0)
        return;
    T[] keyTable = this.keyTable;
    for (int i = capacity + stashSize; i-- > 0; ) keyTable[i] = null;
    size = 0;
    stashSize = 0;
}

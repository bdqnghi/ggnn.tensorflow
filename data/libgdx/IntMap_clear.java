public void clear() {
    if (size == 0)
        return;
    int[] keyTable = this.keyTable;
    V[] valueTable = this.valueTable;
    for (int i = capacity + stashSize; i-- > 0; ) {
        keyTable[i] = EMPTY;
        valueTable[i] = null;
    }
    size = 0;
    stashSize = 0;
    zeroValue = null;
    hasZeroValue = false;
}

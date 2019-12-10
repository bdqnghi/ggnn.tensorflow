public void clear() {
    if (size == 0)
        return;
    K[] keyTable = this.keyTable;
    V[] valueTable = this.valueTable;
    for (int i = capacity + stashSize; i-- > 0; ) {
        keyTable[i] = null;
        valueTable[i] = null;
    }
    size = 0;
    stashSize = 0;
}

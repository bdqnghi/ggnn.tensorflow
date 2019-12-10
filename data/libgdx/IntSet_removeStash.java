boolean removeStash(int key) {
    int[] keyTable = this.keyTable;
    for (int i = capacity, n = i + stashSize; i < n; i++) {
        if (keyTable[i] == key) {
            removeStashIndex(i);
            size--;
            return true;
        }
    }
    return false;
}

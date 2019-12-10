void findNextIndex() {
    hasNext = false;
    int[] keyTable = set.keyTable;
    for (int n = set.capacity + set.stashSize; ++nextIndex < n; ) {
        if (keyTable[nextIndex] != EMPTY) {
            hasNext = true;
            break;
        }
    }
}

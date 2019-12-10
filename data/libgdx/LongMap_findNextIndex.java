void findNextIndex() {
    hasNext = false;
    long[] keyTable = map.keyTable;
    for (int n = map.capacity + map.stashSize; ++nextIndex < n; ) {
        if (keyTable[nextIndex] != EMPTY) {
            hasNext = true;
            break;
        }
    }
}

void findNextIndex() {
    hasNext = false;
    K[] keyTable = set.keyTable;
    for (int n = set.capacity + set.stashSize; ++nextIndex < n; ) {
        if (keyTable[nextIndex] != null) {
            hasNext = true;
            break;
        }
    }
}

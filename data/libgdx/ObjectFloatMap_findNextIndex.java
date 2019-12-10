void findNextIndex() {
    hasNext = false;
    K[] keyTable = map.keyTable;
    for (int n = map.capacity + map.stashSize; ++nextIndex < n; ) {
        if (keyTable[nextIndex] != null) {
            hasNext = true;
            break;
        }
    }
}

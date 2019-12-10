public T first() {
    T[] keyTable = this.keyTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) if (keyTable[i] != null)
        return keyTable[i];
    throw new IllegalStateException("ObjectSet is empty.");
}

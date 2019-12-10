public int hashCode() {
    int h = 0;
    for (int i = 0, n = capacity + stashSize; i < n; i++) if (keyTable[i] != EMPTY)
        h += keyTable[i];
    return h;
}

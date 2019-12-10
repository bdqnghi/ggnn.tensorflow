public int hashCode() {
    int h = 0;
    for (int i = 0, n = capacity + stashSize; i < n; i++) if (keyTable[i] != null)
        h += keyTable[i].hashCode();
    return h;
}

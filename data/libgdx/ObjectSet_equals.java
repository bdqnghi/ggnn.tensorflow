public boolean equals(Object obj) {
    if (!(obj instanceof ObjectSet))
        return false;
    ObjectSet other = (ObjectSet) obj;
    if (other.size != size)
        return false;
    for (int i = 0, n = capacity + stashSize; i < n; i++) if (keyTable[i] != null && !other.contains(keyTable[i]))
        return false;
    return true;
}

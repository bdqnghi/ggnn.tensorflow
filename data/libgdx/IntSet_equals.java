public boolean equals(Object obj) {
    if (!(obj instanceof IntSet))
        return false;
    IntSet other = (IntSet) obj;
    if (other.size != size)
        return false;
    if (other.hasZeroValue != hasZeroValue)
        return false;
    for (int i = 0, n = capacity + stashSize; i < n; i++) if (keyTable[i] != EMPTY && !other.contains(keyTable[i]))
        return false;
    return true;
}

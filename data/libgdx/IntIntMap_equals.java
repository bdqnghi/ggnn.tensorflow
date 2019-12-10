public boolean equals(Object obj) {
    if (obj == this)
        return true;
    if (!(obj instanceof IntIntMap))
        return false;
    IntIntMap other = (IntIntMap) obj;
    if (other.size != size)
        return false;
    if (other.hasZeroValue != hasZeroValue)
        return false;
    if (hasZeroValue && other.zeroValue != zeroValue) {
        return false;
    }
    int[] keyTable = this.keyTable;
    int[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        int key = keyTable[i];
        if (key != EMPTY) {
            int otherValue = other.get(key, 0);
            if (otherValue == 0 && !other.containsKey(key))
                return false;
            int value = valueTable[i];
            if (otherValue != value)
                return false;
        }
    }
    return true;
}

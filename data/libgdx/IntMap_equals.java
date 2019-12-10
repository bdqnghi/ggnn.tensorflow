public boolean equals(Object obj) {
    if (obj == this)
        return true;
    if (!(obj instanceof IntMap))
        return false;
    IntMap<V> other = (IntMap) obj;
    if (other.size != size)
        return false;
    if (other.hasZeroValue != hasZeroValue)
        return false;
    if (hasZeroValue) {
        if (other.zeroValue == null) {
            if (zeroValue != null)
                return false;
        } else {
            if (!other.zeroValue.equals(zeroValue))
                return false;
        }
    }
    int[] keyTable = this.keyTable;
    V[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        int key = keyTable[i];
        if (key != EMPTY) {
            V value = valueTable[i];
            if (value == null) {
                if (!other.containsKey(key) || other.get(key) != null) {
                    return false;
                }
            } else {
                if (!value.equals(other.get(key))) {
                    return false;
                }
            }
        }
    }
    return true;
}

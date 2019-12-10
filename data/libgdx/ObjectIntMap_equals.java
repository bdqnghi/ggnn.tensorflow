public boolean equals(Object obj) {
    if (obj == this)
        return true;
    if (!(obj instanceof ObjectIntMap))
        return false;
    ObjectIntMap<K> other = (ObjectIntMap) obj;
    if (other.size != size)
        return false;
    K[] keyTable = this.keyTable;
    int[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        K key = keyTable[i];
        if (key != null) {
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

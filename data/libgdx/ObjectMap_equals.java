public boolean equals(Object obj) {
    if (obj == this)
        return true;
    if (!(obj instanceof ObjectMap))
        return false;
    ObjectMap<K, V> other = (ObjectMap) obj;
    if (other.size != size)
        return false;
    K[] keyTable = this.keyTable;
    V[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        K key = keyTable[i];
        if (key != null) {
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

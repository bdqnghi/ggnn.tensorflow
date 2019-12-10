public boolean equals(Object obj) {
    if (obj == this)
        return true;
    if (!(obj instanceof ArrayMap))
        return false;
    ArrayMap<K, V> other = (ArrayMap) obj;
    if (other.size != size)
        return false;
    K[] keys = this.keys;
    V[] values = this.values;
    for (int i = 0, n = size; i < n; i++) {
        K key = keys[i];
        V value = values[i];
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
    return true;
}

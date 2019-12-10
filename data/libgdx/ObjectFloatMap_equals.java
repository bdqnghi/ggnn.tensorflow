public boolean equals(Object obj) {
    if (obj == this)
        return true;
    if (!(obj instanceof ObjectFloatMap))
        return false;
    ObjectFloatMap<K> other = (ObjectFloatMap) obj;
    if (other.size != size)
        return false;
    K[] keyTable = this.keyTable;
    float[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        K key = keyTable[i];
        if (key != null) {
            float otherValue = other.get(key, 0f);
            if (otherValue == 0f && !other.containsKey(key))
                return false;
            float value = valueTable[i];
            if (otherValue != value)
                return false;
        }
    }
    return true;
}

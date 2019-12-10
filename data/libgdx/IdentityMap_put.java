public V put(K key, V value) {
    if (key == null)
        throw new IllegalArgumentException("key cannot be null.");
    K[] keyTable = this.keyTable;
    // Check for existing keys.
    int hashCode = System.identityHashCode(key);
    int index1 = hashCode & mask;
    K key1 = keyTable[index1];
    if (key1 == key) {
        V oldValue = valueTable[index1];
        valueTable[index1] = value;
        return oldValue;
    }
    int index2 = hash2(hashCode);
    K key2 = keyTable[index2];
    if (key2 == key) {
        V oldValue = valueTable[index2];
        valueTable[index2] = value;
        return oldValue;
    }
    int index3 = hash3(hashCode);
    K key3 = keyTable[index3];
    if (key3 == key) {
        V oldValue = valueTable[index3];
        valueTable[index3] = value;
        return oldValue;
    }
    // Update key in the stash.
    for (int i = capacity, n = i + stashSize; i < n; i++) {
        if (keyTable[i] == key) {
            V oldValue = valueTable[i];
            valueTable[i] = value;
            return oldValue;
        }
    }
    // Check for empty buckets.
    if (key1 == null) {
        keyTable[index1] = key;
        valueTable[index1] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return null;
    }
    if (key2 == null) {
        keyTable[index2] = key;
        valueTable[index2] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return null;
    }
    if (key3 == null) {
        keyTable[index3] = key;
        valueTable[index3] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return null;
    }
    push(key, value, index1, key1, index2, key2, index3, key3);
    return null;
}

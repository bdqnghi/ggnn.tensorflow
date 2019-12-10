/**
 * Skips checks for existing keys.
 */
private void putResize(K key, float value) {
    // Check for empty buckets.
    int hashCode = key.hashCode();
    int index1 = hashCode & mask;
    K key1 = keyTable[index1];
    if (key1 == null) {
        keyTable[index1] = key;
        valueTable[index1] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    int index2 = hash2(hashCode);
    K key2 = keyTable[index2];
    if (key2 == null) {
        keyTable[index2] = key;
        valueTable[index2] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    int index3 = hash3(hashCode);
    K key3 = keyTable[index3];
    if (key3 == null) {
        keyTable[index3] = key;
        valueTable[index3] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    push(key, value, index1, key1, index2, key2, index3, key3);
}

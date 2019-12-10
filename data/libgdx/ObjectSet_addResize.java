/**
 * Skips checks for existing keys.
 */
private void addResize(T key) {
    // Check for empty buckets.
    int hashCode = key.hashCode();
    int index1 = hashCode & mask;
    T key1 = keyTable[index1];
    if (key1 == null) {
        keyTable[index1] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    int index2 = hash2(hashCode);
    T key2 = keyTable[index2];
    if (key2 == null) {
        keyTable[index2] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    int index3 = hash3(hashCode);
    T key3 = keyTable[index3];
    if (key3 == null) {
        keyTable[index3] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    push(key, index1, key1, index2, key2, index3, key3);
}

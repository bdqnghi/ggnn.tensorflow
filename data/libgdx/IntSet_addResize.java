/**
 * Skips checks for existing keys.
 */
private void addResize(int key) {
    if (key == 0) {
        hasZeroValue = true;
        return;
    }
    // Check for empty buckets.
    int index1 = key & mask;
    int key1 = keyTable[index1];
    if (key1 == EMPTY) {
        keyTable[index1] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    int index2 = hash2(key);
    int key2 = keyTable[index2];
    if (key2 == EMPTY) {
        keyTable[index2] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    int index3 = hash3(key);
    int key3 = keyTable[index3];
    if (key3 == EMPTY) {
        keyTable[index3] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    push(key, index1, key1, index2, key2, index3, key3);
}

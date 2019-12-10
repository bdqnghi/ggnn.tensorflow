/**
 * Skips checks for existing keys.
 */
private void putResize(int key, int value) {
    if (key == 0) {
        zeroValue = value;
        hasZeroValue = true;
        return;
    }
    // Check for empty buckets.
    int index1 = key & mask;
    int key1 = keyTable[index1];
    if (key1 == EMPTY) {
        keyTable[index1] = key;
        valueTable[index1] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    int index2 = hash2(key);
    int key2 = keyTable[index2];
    if (key2 == EMPTY) {
        keyTable[index2] = key;
        valueTable[index2] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    int index3 = hash3(key);
    int key3 = keyTable[index3];
    if (key3 == EMPTY) {
        keyTable[index3] = key;
        valueTable[index3] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    push(key, value, index1, key1, index2, key2, index3, key3);
}

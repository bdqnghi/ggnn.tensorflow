/**
 * Returns true if the key was not already in the set.
 */
public boolean add(int key) {
    if (key == 0) {
        if (hasZeroValue)
            return false;
        hasZeroValue = true;
        size++;
        return true;
    }
    int[] keyTable = this.keyTable;
    // Check for existing keys.
    int index1 = key & mask;
    int key1 = keyTable[index1];
    if (key1 == key)
        return false;
    int index2 = hash2(key);
    int key2 = keyTable[index2];
    if (key2 == key)
        return false;
    int index3 = hash3(key);
    int key3 = keyTable[index3];
    if (key3 == key)
        return false;
    // Find key in the stash.
    for (int i = capacity, n = i + stashSize; i < n; i++) if (keyTable[i] == key)
        return false;
    // Check for empty buckets.
    if (key1 == EMPTY) {
        keyTable[index1] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return true;
    }
    if (key2 == EMPTY) {
        keyTable[index2] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return true;
    }
    if (key3 == EMPTY) {
        keyTable[index3] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return true;
    }
    push(key, index1, key1, index2, key2, index3, key3);
    return true;
}

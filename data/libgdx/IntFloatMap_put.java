public void put(int key, float value) {
    if (key == 0) {
        zeroValue = value;
        if (!hasZeroValue) {
            hasZeroValue = true;
            size++;
        }
        return;
    }
    int[] keyTable = this.keyTable;
    // Check for existing keys.
    int index1 = key & mask;
    int key1 = keyTable[index1];
    if (key == key1) {
        valueTable[index1] = value;
        return;
    }
    int index2 = hash2(key);
    int key2 = keyTable[index2];
    if (key == key2) {
        valueTable[index2] = value;
        return;
    }
    int index3 = hash3(key);
    int key3 = keyTable[index3];
    if (key == key3) {
        valueTable[index3] = value;
        return;
    }
    // Update key in the stash.
    for (int i = capacity, n = i + stashSize; i < n; i++) {
        if (key == keyTable[i]) {
            valueTable[i] = value;
            return;
        }
    }
    // Check for empty buckets.
    if (key1 == EMPTY) {
        keyTable[index1] = key;
        valueTable[index1] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    if (key2 == EMPTY) {
        keyTable[index2] = key;
        valueTable[index2] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    if (key3 == EMPTY) {
        keyTable[index3] = key;
        valueTable[index3] = value;
        if (size++ >= threshold)
            resize(capacity << 1);
        return;
    }
    push(key, value, index1, key1, index2, key2, index3, key3);
}

private void push(int insertKey, V insertValue, int index1, int key1, int index2, int key2, int index3, int key3) {
    int[] keyTable = this.keyTable;
    V[] valueTable = this.valueTable;
    int mask = this.mask;
    // Push keys until an empty bucket is found.
    int evictedKey;
    V evictedValue;
    int i = 0, pushIterations = this.pushIterations;
    do {
        // Replace the key and value for one of the hashes.
        switch(MathUtils.random(2)) {
            case 0:
                evictedKey = key1;
                evictedValue = valueTable[index1];
                keyTable[index1] = insertKey;
                valueTable[index1] = insertValue;
                break;
            case 1:
                evictedKey = key2;
                evictedValue = valueTable[index2];
                keyTable[index2] = insertKey;
                valueTable[index2] = insertValue;
                break;
            default:
                evictedKey = key3;
                evictedValue = valueTable[index3];
                keyTable[index3] = insertKey;
                valueTable[index3] = insertValue;
                break;
        }
        // If the evicted key hashes to an empty bucket, put it there and stop.
        index1 = evictedKey & mask;
        key1 = keyTable[index1];
        if (key1 == EMPTY) {
            keyTable[index1] = evictedKey;
            valueTable[index1] = evictedValue;
            if (size++ >= threshold)
                resize(capacity << 1);
            return;
        }
        index2 = hash2(evictedKey);
        key2 = keyTable[index2];
        if (key2 == EMPTY) {
            keyTable[index2] = evictedKey;
            valueTable[index2] = evictedValue;
            if (size++ >= threshold)
                resize(capacity << 1);
            return;
        }
        index3 = hash3(evictedKey);
        key3 = keyTable[index3];
        if (key3 == EMPTY) {
            keyTable[index3] = evictedKey;
            valueTable[index3] = evictedValue;
            if (size++ >= threshold)
                resize(capacity << 1);
            return;
        }
        if (++i == pushIterations)
            break;
        insertKey = evictedKey;
        insertValue = evictedValue;
    } while (true);
    putStash(evictedKey, evictedValue);
}

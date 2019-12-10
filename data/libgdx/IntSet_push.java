private void push(int insertKey, int index1, int key1, int index2, int key2, int index3, int key3) {
    int[] keyTable = this.keyTable;
    int mask = this.mask;
    // Push keys until an empty bucket is found.
    int evictedKey;
    int i = 0, pushIterations = this.pushIterations;
    do {
        // Replace the key and value for one of the hashes.
        switch(MathUtils.random(2)) {
            case 0:
                evictedKey = key1;
                keyTable[index1] = insertKey;
                break;
            case 1:
                evictedKey = key2;
                keyTable[index2] = insertKey;
                break;
            default:
                evictedKey = key3;
                keyTable[index3] = insertKey;
                break;
        }
        // If the evicted key hashes to an empty bucket, put it there and stop.
        index1 = evictedKey & mask;
        key1 = keyTable[index1];
        if (key1 == EMPTY) {
            keyTable[index1] = evictedKey;
            if (size++ >= threshold)
                resize(capacity << 1);
            return;
        }
        index2 = hash2(evictedKey);
        key2 = keyTable[index2];
        if (key2 == EMPTY) {
            keyTable[index2] = evictedKey;
            if (size++ >= threshold)
                resize(capacity << 1);
            return;
        }
        index3 = hash3(evictedKey);
        key3 = keyTable[index3];
        if (key3 == EMPTY) {
            keyTable[index3] = evictedKey;
            if (size++ >= threshold)
                resize(capacity << 1);
            return;
        }
        if (++i == pushIterations)
            break;
        insertKey = evictedKey;
    } while (true);
    addStash(evictedKey);
}

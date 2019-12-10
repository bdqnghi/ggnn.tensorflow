private void push(T insertKey, int index1, T key1, int index2, T key2, int index3, T key3) {
    T[] keyTable = this.keyTable;
    int mask = this.mask;
    // Push keys until an empty bucket is found.
    T evictedKey;
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
        int hashCode = evictedKey.hashCode();
        index1 = hashCode & mask;
        key1 = keyTable[index1];
        if (key1 == null) {
            keyTable[index1] = evictedKey;
            if (size++ >= threshold)
                resize(capacity << 1);
            return;
        }
        index2 = hash2(hashCode);
        key2 = keyTable[index2];
        if (key2 == null) {
            keyTable[index2] = evictedKey;
            if (size++ >= threshold)
                resize(capacity << 1);
            return;
        }
        index3 = hash3(hashCode);
        key3 = keyTable[index3];
        if (key3 == null) {
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

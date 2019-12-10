/**
 * Returns true if the key was not already in the set. If this set already contains the key, the call leaves the set unchanged
 * and returns false.
 */
public boolean add(T key) {
    if (key == null)
        throw new IllegalArgumentException("key cannot be null.");
    T[] keyTable = this.keyTable;
    // Check for existing keys.
    int hashCode = key.hashCode();
    int index1 = hashCode & mask;
    T key1 = keyTable[index1];
    if (key.equals(key1))
        return false;
    int index2 = hash2(hashCode);
    T key2 = keyTable[index2];
    if (key.equals(key2))
        return false;
    int index3 = hash3(hashCode);
    T key3 = keyTable[index3];
    if (key.equals(key3))
        return false;
    // Find key in the stash.
    for (int i = capacity, n = i + stashSize; i < n; i++) if (key.equals(keyTable[i]))
        return false;
    // Check for empty buckets.
    if (key1 == null) {
        keyTable[index1] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return true;
    }
    if (key2 == null) {
        keyTable[index2] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return true;
    }
    if (key3 == null) {
        keyTable[index3] = key;
        if (size++ >= threshold)
            resize(capacity << 1);
        return true;
    }
    push(key, index1, key1, index2, key2, index3, key3);
    return true;
}

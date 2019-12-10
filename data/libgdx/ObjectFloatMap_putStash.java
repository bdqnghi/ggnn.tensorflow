private void putStash(K key, float value) {
    if (stashSize == stashCapacity) {
        // Too many pushes occurred and the stash is full, increase the table size.
        resize(capacity << 1);
        put(key, value);
        return;
    }
    // Store key in the stash.
    int index = capacity + stashSize;
    keyTable[index] = key;
    valueTable[index] = value;
    stashSize++;
    size++;
}

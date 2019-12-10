private void addStash(T key) {
    if (stashSize == stashCapacity) {
        // Too many pushes occurred and the stash is full, increase the table size.
        resize(capacity << 1);
        add(key);
        return;
    }
    // Store key in the stash.
    int index = capacity + stashSize;
    keyTable[index] = key;
    stashSize++;
    size++;
}

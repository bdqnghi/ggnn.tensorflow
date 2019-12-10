public V get(long key, V defaultValue) {
    if (key == 0) {
        if (!hasZeroValue)
            return defaultValue;
        return zeroValue;
    }
    int index = (int) (key & mask);
    if (keyTable[index] != key) {
        index = hash2(key);
        if (keyTable[index] != key) {
            index = hash3(key);
            if (keyTable[index] != key)
                return getStash(key, defaultValue);
        }
    }
    return valueTable[index];
}

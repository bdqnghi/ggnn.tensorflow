public boolean containsKey(long key) {
    if (key == 0)
        return hasZeroValue;
    int index = (int) (key & mask);
    if (keyTable[index] != key) {
        index = hash2(key);
        if (keyTable[index] != key) {
            index = hash3(key);
            if (keyTable[index] != key)
                return containsKeyStash(key);
        }
    }
    return true;
}

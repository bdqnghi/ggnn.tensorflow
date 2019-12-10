public boolean contains(int key) {
    if (key == 0)
        return hasZeroValue;
    int index = key & mask;
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

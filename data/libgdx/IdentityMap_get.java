public V get(K key, V defaultValue) {
    int hashCode = System.identityHashCode(key);
    int index = hashCode & mask;
    if (key != keyTable[index]) {
        index = hash2(hashCode);
        if (key != keyTable[index]) {
            index = hash3(hashCode);
            if (key != keyTable[index])
                return getStash(key, defaultValue);
        }
    }
    return valueTable[index];
}

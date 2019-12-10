/**
 * Returns the value for the specified key, or the default value if the key is not in the map.
 */
public V get(K key, V defaultValue) {
    int hashCode = key.hashCode();
    int index = hashCode & mask;
    if (!key.equals(keyTable[index])) {
        index = hash2(hashCode);
        if (!key.equals(keyTable[index])) {
            index = hash3(hashCode);
            if (!key.equals(keyTable[index]))
                return getStash(key, defaultValue);
        }
    }
    return valueTable[index];
}

/**
 * Returns the key's current value and increments the stored value. If the key is not in the map, defaultValue + increment is
 * put into the map.
 */
public int getAndIncrement(K key, int defaultValue, int increment) {
    int hashCode = key.hashCode();
    int index = hashCode & mask;
    if (!key.equals(keyTable[index])) {
        index = hash2(hashCode);
        if (!key.equals(keyTable[index])) {
            index = hash3(hashCode);
            if (!key.equals(keyTable[index]))
                return getAndIncrementStash(key, defaultValue, increment);
        }
    }
    int value = valueTable[index];
    valueTable[index] = value + increment;
    return value;
}

/**
 * @param defaultValue Returned if the key was not associated with a value.
 */
public float get(int key, float defaultValue) {
    if (key == 0) {
        if (!hasZeroValue)
            return defaultValue;
        return zeroValue;
    }
    int index = key & mask;
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

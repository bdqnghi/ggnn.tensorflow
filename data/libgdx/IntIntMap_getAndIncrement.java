/**
 * Returns the key's current value and increments the stored value. If the key is not in the map, defaultValue + increment is
 * put into the map.
 */
public int getAndIncrement(int key, int defaultValue, int increment) {
    if (key == 0) {
        if (hasZeroValue) {
            int value = zeroValue;
            zeroValue += increment;
            return value;
        } else {
            hasZeroValue = true;
            zeroValue = defaultValue + increment;
            ++size;
            return defaultValue;
        }
    }
    int index = key & mask;
    if (key != keyTable[index]) {
        index = hash2(key);
        if (key != keyTable[index]) {
            index = hash3(key);
            if (key != keyTable[index])
                return getAndIncrementStash(key, defaultValue, increment);
        }
    }
    int value = valueTable[index];
    valueTable[index] = value + increment;
    return value;
}

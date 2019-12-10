public boolean equals(Object obj) {
    if (obj == this)
        return true;
    if (!(obj instanceof IntFloatMap))
        return false;
    IntFloatMap other = (IntFloatMap) obj;
    if (other.size != size)
        return false;
    if (other.hasZeroValue != hasZeroValue)
        return false;
    if (hasZeroValue && other.zeroValue != zeroValue) {
        return false;
    }
    int[] keyTable = this.keyTable;
    float[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        int key = keyTable[i];
        if (key != EMPTY) {
            float otherValue = other.get(key, 0f);
            if (otherValue == 0f && !other.containsKey(key))
                return false;
            float value = valueTable[i];
            if (otherValue != value)
                return false;
        }
    }
    return true;
}

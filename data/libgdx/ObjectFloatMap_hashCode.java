public int hashCode() {
    int h = 0;
    K[] keyTable = this.keyTable;
    float[] valueTable = this.valueTable;
    for (int i = 0, n = capacity + stashSize; i < n; i++) {
        K key = keyTable[i];
        if (key != null) {
            h += key.hashCode() * 31;
            float value = valueTable[i];
            h += Float.floatToIntBits(value);
        }
    }
    return h;
}

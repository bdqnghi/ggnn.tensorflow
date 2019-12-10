private void resize(int newSize) {
    int oldEndIndex = capacity + stashSize;
    capacity = newSize;
    threshold = (int) (newSize * loadFactor);
    mask = newSize - 1;
    hashShift = 31 - Integer.numberOfTrailingZeros(newSize);
    stashCapacity = Math.max(3, (int) Math.ceil(Math.log(newSize)) * 2);
    pushIterations = Math.max(Math.min(newSize, 8), (int) Math.sqrt(newSize) / 8);
    K[] oldKeyTable = keyTable;
    int[] oldValueTable = valueTable;
    keyTable = (K[]) new Object[newSize + stashCapacity];
    valueTable = new int[newSize + stashCapacity];
    int oldSize = size;
    size = 0;
    stashSize = 0;
    if (oldSize > 0) {
        for (int i = 0; i < oldEndIndex; i++) {
            K key = oldKeyTable[i];
            if (key != null)
                putResize(key, oldValueTable[i]);
        }
    }
}

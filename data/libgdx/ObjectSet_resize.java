private void resize(int newSize) {
    int oldEndIndex = capacity + stashSize;
    capacity = newSize;
    threshold = (int) (newSize * loadFactor);
    mask = newSize - 1;
    hashShift = 31 - Integer.numberOfTrailingZeros(newSize);
    stashCapacity = Math.max(3, (int) Math.ceil(Math.log(newSize)) * 2);
    pushIterations = Math.max(Math.min(newSize, 8), (int) Math.sqrt(newSize) / 8);
    T[] oldKeyTable = keyTable;
    keyTable = (T[]) new Object[newSize + stashCapacity];
    int oldSize = size;
    size = 0;
    stashSize = 0;
    if (oldSize > 0) {
        for (int i = 0; i < oldEndIndex; i++) {
            T key = oldKeyTable[i];
            if (key != null)
                addResize(key);
        }
    }
}

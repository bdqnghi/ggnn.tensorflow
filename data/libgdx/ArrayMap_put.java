public int put(K key, V value, int index) {
    int existingIndex = indexOfKey(key);
    if (existingIndex != -1)
        removeIndex(existingIndex);
    else if (// 
    size == keys.length)
        resize(Math.max(8, (int) (size * 1.75f)));
    System.arraycopy(keys, index, keys, index + 1, size - index);
    System.arraycopy(values, index, values, index + 1, size - index);
    keys[index] = key;
    values[index] = value;
    size++;
    return index;
}

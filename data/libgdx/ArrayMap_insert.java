public void insert(int index, K key, V value) {
    if (index > size)
        throw new IndexOutOfBoundsException(String.valueOf(index));
    if (size == keys.length)
        resize(Math.max(8, (int) (size * 1.75f)));
    if (ordered) {
        System.arraycopy(keys, index, keys, index + 1, size - index);
        System.arraycopy(values, index, values, index + 1, size - index);
    } else {
        keys[size] = keys[index];
        values[size] = values[index];
    }
    size++;
    keys[index] = key;
    values[index] = value;
}

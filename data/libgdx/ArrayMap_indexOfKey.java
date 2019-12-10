public int indexOfKey(K key) {
    Object[] keys = this.keys;
    if (key == null) {
        for (int i = 0, n = size; i < n; i++) if (keys[i] == key)
            return i;
    } else {
        for (int i = 0, n = size; i < n; i++) if (key.equals(keys[i]))
            return i;
    }
    return -1;
}

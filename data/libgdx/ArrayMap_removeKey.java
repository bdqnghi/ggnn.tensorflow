public V removeKey(K key) {
    Object[] keys = this.keys;
    if (key == null) {
        for (int i = 0, n = size; i < n; i++) {
            if (keys[i] == key) {
                V value = values[i];
                removeIndex(i);
                return value;
            }
        }
    } else {
        for (int i = 0, n = size; i < n; i++) {
            if (key.equals(keys[i])) {
                V value = values[i];
                removeIndex(i);
                return value;
            }
        }
    }
    return null;
}

/**
 * Returns the value for the specified key. Note this does a .equals() comparison of each key in reverse order until the
 * specified key is found.
 */
public V get(K key) {
    Object[] keys = this.keys;
    int i = size - 1;
    if (key == null) {
        for (; i >= 0; i--) if (keys[i] == key)
            return values[i];
    } else {
        for (; i >= 0; i--) if (key.equals(keys[i]))
            return values[i];
    }
    return null;
}

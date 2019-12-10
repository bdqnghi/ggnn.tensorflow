public boolean containsKey(K key) {
    K[] keys = this.keys;
    int i = size - 1;
    if (key == null) {
        while (i >= 0) if (keys[i--] == key)
            return true;
    } else {
        while (i >= 0) if (key.equals(keys[i--]))
            return true;
    }
    return false;
}

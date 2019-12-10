public V put(K key, V value) {
    if (!containsKey(key))
        keys.add(key);
    return super.put(key, value);
}

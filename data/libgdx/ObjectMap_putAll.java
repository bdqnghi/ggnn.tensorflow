public void putAll(ObjectMap<K, V> map) {
    ensureCapacity(map.size);
    for (Entry<K, V> entry : map) put(entry.key, entry.value);
}

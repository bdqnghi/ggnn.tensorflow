public void putAll(LongMap<V> map) {
    for (Entry<V> entry : map.entries()) put(entry.key, entry.value);
}

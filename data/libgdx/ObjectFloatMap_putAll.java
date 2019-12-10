public void putAll(ObjectFloatMap<K> map) {
    for (Entry<K> entry : map.entries()) put(entry.key, entry.value);
}

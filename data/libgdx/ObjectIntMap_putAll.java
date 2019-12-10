public void putAll(ObjectIntMap<K> map) {
    for (Entry<K> entry : map.entries()) put(entry.key, entry.value);
}

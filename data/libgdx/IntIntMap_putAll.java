public void putAll(IntIntMap map) {
    for (Entry entry : map.entries()) put(entry.key, entry.value);
}

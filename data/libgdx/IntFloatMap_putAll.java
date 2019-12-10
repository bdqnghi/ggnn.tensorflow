public void putAll(IntFloatMap map) {
    for (Entry entry : map.entries()) put(entry.key, entry.value);
}

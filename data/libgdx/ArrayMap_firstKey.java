public K firstKey() {
    if (size == 0)
        throw new IllegalStateException("Map is empty.");
    return keys[0];
}

public V firstValue() {
    if (size == 0)
        throw new IllegalStateException("Map is empty.");
    return values[0];
}

public String toString() {
    if (size == 0)
        return "{}";
    StringBuilder buffer = new StringBuilder(32);
    buffer.append('{');
    Array<K> keys = this.keys;
    for (int i = 0, n = keys.size; i < n; i++) {
        K key = keys.get(i);
        if (i > 0)
            buffer.append(", ");
        buffer.append(key);
        buffer.append('=');
        buffer.append(get(key));
    }
    buffer.append('}');
    return buffer.toString();
}

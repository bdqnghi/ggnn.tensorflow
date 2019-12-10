public String toString() {
    if (size == 0)
        return "{}";
    StringBuilder buffer = new StringBuilder(32);
    buffer.append('{');
    Array<T> keys = this.items;
    for (int i = 0, n = keys.size; i < n; i++) {
        T key = keys.get(i);
        if (i > 0)
            buffer.append(", ");
        buffer.append(key);
    }
    buffer.append('}');
    return buffer.toString();
}

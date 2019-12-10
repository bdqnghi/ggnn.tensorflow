public String toString() {
    if (size == 0)
        return "{}";
    K[] keys = this.keys;
    V[] values = this.values;
    StringBuilder buffer = new StringBuilder(32);
    buffer.append('{');
    buffer.append(keys[0]);
    buffer.append('=');
    buffer.append(values[0]);
    for (int i = 1; i < size; i++) {
        buffer.append(", ");
        buffer.append(keys[i]);
        buffer.append('=');
        buffer.append(values[i]);
    }
    buffer.append('}');
    return buffer.toString();
}

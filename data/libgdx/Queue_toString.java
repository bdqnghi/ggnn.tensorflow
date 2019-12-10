public String toString() {
    if (size == 0) {
        return "[]";
    }
    final T[] values = this.values;
    final int head = this.head;
    final int tail = this.tail;
    StringBuilder sb = new StringBuilder(64);
    sb.append('[');
    sb.append(values[head]);
    for (int i = (head + 1) % values.length; i != tail; i = (i + 1) % values.length) {
        sb.append(", ").append(values[i]);
    }
    sb.append(']');
    return sb.toString();
}

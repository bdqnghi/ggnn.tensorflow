public int hashCode() {
    int h = 1;
    for (int i = 0, n = size; i < n; i++) h = h * 31 + Float.floatToIntBits(nodes[i].value);
    return h;
}

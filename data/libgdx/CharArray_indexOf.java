public int indexOf(char value) {
    char[] items = this.items;
    for (int i = 0, n = size; i < n; i++) if (items[i] == value)
        return i;
    return -1;
}

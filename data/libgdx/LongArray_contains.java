public boolean contains(long value) {
    int i = size - 1;
    long[] items = this.items;
    while (i >= 0) if (items[i--] == value)
        return true;
    return false;
}

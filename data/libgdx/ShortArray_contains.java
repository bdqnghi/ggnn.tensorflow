public boolean contains(short value) {
    int i = size - 1;
    short[] items = this.items;
    while (i >= 0) if (items[i--] == value)
        return true;
    return false;
}

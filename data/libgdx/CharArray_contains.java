public boolean contains(char value) {
    int i = size - 1;
    char[] items = this.items;
    while (i >= 0) if (items[i--] == value)
        return true;
    return false;
}

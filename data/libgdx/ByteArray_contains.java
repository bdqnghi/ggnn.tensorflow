public boolean contains(byte value) {
    int i = size - 1;
    byte[] items = this.items;
    while (i >= 0) if (items[i--] == value)
        return true;
    return false;
}

public int lastIndexOf(byte value) {
    byte[] items = this.items;
    for (int i = size - 1; i >= 0; i--) if (items[i] == value)
        return i;
    return -1;
}

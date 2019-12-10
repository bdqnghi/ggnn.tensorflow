public boolean contains(float value) {
    int i = size - 1;
    float[] items = this.items;
    while (i >= 0) if (items[i--] == value)
        return true;
    return false;
}

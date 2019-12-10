public boolean removeValue(float value) {
    float[] items = this.items;
    for (int i = 0, n = size; i < n; i++) {
        if (items[i] == value) {
            removeIndex(i);
            return true;
        }
    }
    return false;
}

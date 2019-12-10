public void reverse() {
    long[] items = this.items;
    for (int i = 0, lastIndex = size - 1, n = size / 2; i < n; i++) {
        int ii = lastIndex - i;
        long temp = items[i];
        items[i] = items[ii];
        items[ii] = temp;
    }
}

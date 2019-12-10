public int hashCode() {
    if (!ordered)
        return super.hashCode();
    long[] items = this.items;
    int h = 1;
    for (int i = 0, n = size; i < n; i++) h = h * 31 + (int) (items[i] ^ (items[i] >>> 32));
    return h;
}

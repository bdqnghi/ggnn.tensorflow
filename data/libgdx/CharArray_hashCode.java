public int hashCode() {
    if (!ordered)
        return super.hashCode();
    char[] items = this.items;
    int h = 1;
    for (int i = 0, n = size; i < n; i++) h = h * 31 + items[i];
    return h;
}

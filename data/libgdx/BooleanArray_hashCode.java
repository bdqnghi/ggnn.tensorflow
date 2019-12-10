public int hashCode() {
    if (!ordered)
        return super.hashCode();
    boolean[] items = this.items;
    int h = 1;
    for (int i = 0, n = size; i < n; i++) h = h * 31 + (items[i] ? 1231 : 1237);
    return h;
}

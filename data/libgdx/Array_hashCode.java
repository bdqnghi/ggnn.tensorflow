public int hashCode() {
    if (!ordered)
        return super.hashCode();
    Object[] items = this.items;
    int h = 1;
    for (int i = 0, n = size; i < n; i++) {
        h *= 31;
        Object item = items[i];
        if (item != null)
            h += item.hashCode();
    }
    return h;
}

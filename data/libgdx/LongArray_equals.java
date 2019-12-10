public boolean equals(Object object) {
    if (object == this)
        return true;
    if (!ordered)
        return false;
    if (!(object instanceof LongArray))
        return false;
    LongArray array = (LongArray) object;
    if (!array.ordered)
        return false;
    int n = size;
    if (n != array.size)
        return false;
    long[] items1 = this.items;
    long[] items2 = array.items;
    for (int i = 0; i < n; i++) if (items[i] != array.items[i])
        return false;
    return true;
}

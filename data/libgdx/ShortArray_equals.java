public boolean equals(Object object) {
    if (object == this)
        return true;
    if (!ordered)
        return false;
    if (!(object instanceof ShortArray))
        return false;
    ShortArray array = (ShortArray) object;
    if (!array.ordered)
        return false;
    int n = size;
    if (n != array.size)
        return false;
    short[] items1 = this.items;
    short[] items2 = array.items;
    for (int i = 0; i < n; i++) if (items[i] != array.items[i])
        return false;
    return true;
}

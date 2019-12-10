public boolean equals(Object object) {
    if (object == this)
        return true;
    if (!ordered)
        return false;
    if (!(object instanceof BooleanArray))
        return false;
    BooleanArray array = (BooleanArray) object;
    if (!array.ordered)
        return false;
    int n = size;
    if (n != array.size)
        return false;
    boolean[] items1 = this.items;
    boolean[] items2 = array.items;
    for (int i = 0; i < n; i++) if (items1[i] != items2[i])
        return false;
    return true;
}

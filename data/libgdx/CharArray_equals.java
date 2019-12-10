public boolean equals(Object object) {
    if (object == this)
        return true;
    if (!ordered)
        return false;
    if (!(object instanceof CharArray))
        return false;
    CharArray array = (CharArray) object;
    if (!array.ordered)
        return false;
    int n = size;
    if (n != array.size)
        return false;
    char[] items1 = this.items;
    char[] items2 = array.items;
    for (int i = 0; i < n; i++) if (items1[i] != items2[i])
        return false;
    return true;
}

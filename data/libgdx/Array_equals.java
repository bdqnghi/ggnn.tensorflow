public boolean equals(Object object) {
    if (object == this)
        return true;
    if (!ordered)
        return false;
    if (!(object instanceof Array))
        return false;
    Array array = (Array) object;
    if (!array.ordered)
        return false;
    int n = size;
    if (n != array.size)
        return false;
    Object[] items1 = this.items;
    Object[] items2 = array.items;
    for (int i = 0; i < n; i++) {
        Object o1 = items1[i];
        Object o2 = items2[i];
        if (!(o1 == null ? o2 == null : o1.equals(o2)))
            return false;
    }
    return true;
}

public boolean equals(Object object, float epsilon) {
    if (object == this)
        return true;
    if (!(object instanceof FloatArray))
        return false;
    FloatArray array = (FloatArray) object;
    int n = size;
    if (n != array.size)
        return false;
    if (!ordered)
        return false;
    if (!array.ordered)
        return false;
    float[] items1 = this.items;
    float[] items2 = array.items;
    for (int i = 0; i < n; i++) if (Math.abs(items1[i] - items2[i]) > epsilon)
        return false;
    return true;
}

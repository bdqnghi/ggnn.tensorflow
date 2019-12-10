public int hashCode() {
    if (!ordered)
        return super.hashCode();
    float[] items = this.items;
    int h = 1;
    for (int i = 0, n = size; i < n; i++) h = h * 31 + Float.floatToIntBits(items[i]);
    return h;
}

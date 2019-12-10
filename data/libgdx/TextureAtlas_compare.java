public int compare(Region region1, Region region2) {
    int i1 = region1.index;
    if (i1 == -1)
        i1 = Integer.MAX_VALUE;
    int i2 = region2.index;
    if (i2 == -1)
        i2 = Integer.MAX_VALUE;
    return i1 - i2;
}

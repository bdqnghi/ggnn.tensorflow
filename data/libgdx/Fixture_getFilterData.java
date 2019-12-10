public Filter getFilterData() {
    jniGetFilterData(addr, tmp);
    filter.maskBits = tmp[0];
    filter.categoryBits = tmp[1];
    filter.groupIndex = tmp[2];
    return filter;
}

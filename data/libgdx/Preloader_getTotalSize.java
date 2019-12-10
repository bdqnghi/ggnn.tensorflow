public long getTotalSize() {
    long size = 0;
    for (int i = 0; i < assets.size; i++) {
        Asset asset = assets.get(i);
        size += asset.size;
    }
    return size;
}

public long getDownloadedSize() {
    long size = 0;
    for (int i = 0; i < assets.size; i++) {
        Asset asset = assets.get(i);
        size += (asset.succeed || asset.failed) ? asset.size : Math.min(asset.size, asset.loaded);
    }
    return size;
}

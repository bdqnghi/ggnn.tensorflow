<K> int getAssetData(String filename, Class<K> type) {
    int i = 0;
    for (AssetData data : sharedAssets) {
        if (data.filename.equals(filename) && data.type.equals(type)) {
            return i;
        }
        ++i;
    }
    return -1;
}
